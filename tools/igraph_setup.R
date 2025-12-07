dir.create("inst", showWarnings=FALSE)
version.target <- file.path("inst", "IGRAPH_VERSION")
if (!file.exists(version.target)) {
    if (!file.copy(file.path("igraph", "IGRAPH_VERSION"), version.target)) {
        stop("failed to copy IGRAPH_VERSION")
    }
}

if (Sys.getenv("RIGRAPHLIB_USE_SYSTEM_LIBRARY", "0") == "1") {
    if (Sys.getenv("RIGRAPHLIB_FORCE_BUILD", "0") != "1") {
        quit('no', status=0)
    }
}

###################################
######### Configuration ###########
###################################

cmake <- biocmake::find()

options <- biocmake::formatArguments(biocmake::configure(fortran.compiler=FALSE))
options <- c(options, "-DIGRAPH_WARNINGS_AS_ERRORS=OFF")

# Setting up BLAS and LAPACK.
X <- sessionInfo()
blas_path <- X$BLAS
lapack_path <- X$LAPACK

if (file.exists(blas_path)) {
    options <- c(options,
        sprintf('-DBLAS_LIBRARIES="%s"', blas_path),
        "-DIGRAPH_USE_INTERNAL_BLAS=0"
    )
}

if (file.exists(lapack_path)) {
    options <- c(options,
        sprintf('-DLAPACK_LIBRARIES="%s"', lapack_path),
        "-DIGRAPH_USE_INTERNAL_LAPACK=0"
    )
}

# Forcing vendored builds of everything else.
options <- c(options,
    "-DIGRAPH_USE_INTERNAL_ARPACK=1",
    "-DIGRAPH_USE_INTERNAL_GLPK=1",
    "-DIGRAPH_USE_INTERNAL_GMP=1",
    "-DIGRAPH_USE_INTERNAL_PLFIT=1"
)

# Skipping the optional dependencies.
options <- c(options,
    "-DIGRAPH_BISON_SUPPORT=0",
    "-DIGRAPH_FLEX_SUPPORT=0"
)

###################################
######### Running CMake ###########
###################################

install_path <- file.path("inst", "igraph")

if (!file.exists(install_path)) {
    build_path <- "_build"

    if (!file.exists(build_path)) {
        source_path <- "igraph"
        options <- c(
            options,
            paste0("-DCMAKE_INSTALL_PREFIX=", install_path),
            "-DCMAKE_PROJECT_NAME=Rigraphlib" # set this to prevent CMake from including irrelevant directories.
        )

        if (system2(cmake, c("-S", source_path, "-B", build_path, options)) != 0) {
            stop("failed to configure the igraph library")
        }
    }

    status <- system2(cmake, c("--build", build_path))
    if (status != 0) {
        stop("failed to build the igraph library")
    }

    if (system2(cmake, c("--install", build_path), stderr=FALSE) != 0) {
        stop("failed to install the igraph library")
    }
}
