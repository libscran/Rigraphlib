#' Configure compilation flags
#'
#' Configure flags for compiling downstream packages.
#'
#' @param opt String specifying the \code{Makevars} option to print.
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
        msg <- NULL
        for (choice in c("lib", "lib64")) {
            target <- system.file(choice, "libigraph.a", package="Rigraphlib")
            if (target != "") {
                msg <- shQuote(target)
                break
            }
        }
        if (is.null(msg)) {
            stop("could not find the libigraph.a binary")
        }

    } else {
        msg <- paste0("-I", shQuote(system.file("include", "igraph", package="Rigraphlib", mustWork=TRUE)))
    }

    cat(msg)
}
