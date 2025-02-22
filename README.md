# Static igraph libraries for R packages

Builds the **igraph** static library for use in R/Bioconductor packages.
This is primarily intended for R packages that wrap other C/C++ libraries that depend on the **igraph** C library
and cannot easily be modified to use the usual R bindings to **igraph**.
By vendoring in the source code, we reduce our susceptibility to out-of-release-schedule changes in results due to **igraph** updates.
It also allows developers to access functionality that might yet not be available from the R bindings.

For downstream package developers, use of **Rigraphlib** is as simple as adding:

```
LinkingTo: Rigraphlib
```

to the `DESCRIPTION`, and setting:

```bash
RIGRAPH_LIBS=$(shell "${R_HOME}/bin${R_ARCH_BIN}/Rscript" -e 'Rigraphlib::pkgconfig()'")
PKG_LIBS=$(RIGRAPH_LIBS)
```

in the `src/Makevars`.

We can update the vendored copy of the source code with:

```bash
VERSION=0.10.15
url=https://github.com/igraph/igraph/releases/download/${VERSION}/igraph-${VERSION}.tar.gz
curl -L ${url} > sources.tar.gz
```
