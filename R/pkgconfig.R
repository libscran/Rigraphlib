#' Configure compilation flags
#'
#' Configure flags for compiling downstream packages.
#'
#' @return Flags to add to the requested \code{opt} of the \code{Makevars} are printed to the screen.
#'
#' @author Aaron Lun
#' @examples
#' pkgconfig("PKG_CPPFLAGS")
#' pkgconfig("PKG_LIBS")
#'
#' @export
pkgconfig <- function(opt=c("PKG_CPPFLAGS", "PKG_LIBS")) {
    opt <- match.arg(opt)
    if (opt == "PKG_LIBS") {
        msg <- shQuote(system.file("lib", "libigraph.a", package="Rigraphlib", mustWork=TRUE))
    } else {
        msg <- paste0("-I", shQuote(system.file("include", "igraph", package="Rigraphlib", mustWork=TRUE)))
    }
    cat(msg)
}
