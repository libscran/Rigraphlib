#' Configure compilation flags
#'
#' Configure flags for compiling downstream packages.
#'
#' @param opt String specifying the \code{Makevars} option to print.
#'
#' @return Flags to add to the requested \code{opt} of the \code{Makevars} are printed to the screen.
#'
#' @details
#' If the \code{RIGRAPHLIB_<OPT>} environment variable is set (where \code{<OPT>} is replaced by \code{opt}),
#' the contents of that variable will be printed by this function,
#' regardless of any other settings.
#'
#' If the \code{RIGRAPHLIB_USE_SYSTEM_LIBRARY} environment is set to 1,
#' this function will print the output of \code{pkg-config igraph} corresponding to \code{opt}.
#' If \code{igraph} cannot be found by \code{pkg-config}, an error is thrown.
#'
#' Otherwise, this function will print flags to link to the binaries generated from the vendored \pkg{igraph} source.
#'
#' If any of the above environment variables are specified,
#' the version of the corresponding \pkg{igraph} instance should be consistent with that of the vendored \pkg{igraph} source.
#' Currently, the vendored version is 1.0.0.
#'
#' @author Aaron Lun
#' @examples
#' pkgconfig("PKG_CPPFLAGS")
#' pkgconfig("PKG_LIBS")
#'
#' @export
pkgconfig <- function(opt=c("PKG_CPPFLAGS", "PKG_LIBS")) {
    opt <- match.arg(opt)

    attempt <- Sys.getenv(paste0("RIGRAPHLIB_", opt), NA)
    if(!is.na(attempt)) {
        cat(attempt)
        return(invisible(NULL))
    }

    if (Sys.getenv("RIGRAPHLIB_USE_SYSTEM_LIBRARY", "0") == "1") {
        if(opt == "PKG_CPP_FLAGS") {
            status <- system2("pkg-config", c("igraph", "--cflags-only-I"))
        } else {
            status <- system2("pkg-config", c("igraph", "--libs"))
        }
        if (status != 0) {
            stop("failed to call pkg-config for igraph")
        }
        return(invisible(NULL))
    }

    if (opt == "PKG_LIBS") {
        msg <- NULL
        for (choice in c("lib", "lib64")) {
            target <- system.file("igraph", choice, "libigraph.a", package="Rigraphlib")
            if (target != "") {
                msg <- shQuote(target)
                break
            }
        }
        if (is.null(msg)) {
            stop("could not find the libigraph.a binary")
        }

    } else {
        msg <- paste0("-I", shQuote(system.file("igraph", "include", "igraph", package="Rigraphlib", mustWork=TRUE)))
    }

    cat(msg)
}
