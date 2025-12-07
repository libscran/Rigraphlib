#' Version of the igraph library.
#'
#' Reports the version of the igraph library used by \code{\link{pkgconfig}}.
#'
#' @param expected Boolean indicating whether to report the version of \pkg{igraph} expected by \pkg{Rigraphlib} and its downstream dependencies.
#' This corresponds to the version that is vendored into the \pkg{Rigraphlib} package.
#' 
#' @return 
#' If \code{expected=FALSE}, the actual version of the \pkg{igraph} library linked by \code{\link{pkgconfig}}.
#'
#' If \code{expected=TRUE}, the expected version of the \pkg{igraph} library to be provided by \pkg{Rigraphlib}. 
#'
#' @details
#' If the \code{RIGRAPHLIB_LIBRARY_VERSION} environment variable is set,
#' the contents of that variable will be returned by this function if \code{expected=FALSE}.
#'
#' If the \code{RIGRAPHLIB_USE_SYSTEM_LIBRARY} variable was set to 1 during \pkg{Rigraphlib} installation or is currently set to 1,
#' the version of \pkg{igraph} reported by \code{pkg-config} is returned if \code{expected=FALSE}.
#' If \code{igraph} cannot be found by \code{pkg-config}, an error is thrown.
#' 
#' Otherwise, the version of the vendored \pkg{igraph} is returned.
#'
#' @examples
#' Rigraphlib::version()
#'
#' @export
version <- function(expected = FALSE) {
    if (!expected) {
        candidate <- Sys.getenv("RIGRAPHLIB_LIBRARY_VERSION", NA)
        if (!is.na(candidate)) {
            return(package_version(candidate))
        }

        if (.use_system_library()) {
            ver <- system2("pkg-config", c("igraph --modversion"), stdout=TRUE)
            status <- attr(ver, "status")
            if (!is.null(status) && status != 0) {
                stop("failed to call pkg-config for igraph")
            }
            return(package_version(ver))
        }
    }

    ver <- readLines(system.file("IGRAPH_VERSION", package="Rigraphlib", mustWork=TRUE), warn=FALSE)
    package_version(ver)
}
