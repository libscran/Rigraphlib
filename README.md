# Static igraph libraries for R packages

|Environment|Status|
|---|---|
|[BioC-release](https://bioconductor.org/packages/release/bioc/html/Rigraphlib.html)|[![Release OK](https://bioconductor.org/shields/build/release/bioc/Rigraphlib.svg)](https://bioconductor.org/checkResults/release/bioc-LATEST/Rigraphlib/)|
|[BioC-devel](https://bioconductor.org/packages/devel/bioc/html/Rigraphlib.html)|[![Devel OK](https://bioconductor.org/shields/build/devel/bioc/Rigraphlib.svg)](https://bioconductor.org/checkResults/devel/bioc-LATEST/Rigraphlib/)|

Builds the [**igraph**](https://igraph.org) static library for use in R/Bioconductor packages.
This is primarily intended for R packages that wrap other C/C++ libraries that depend on the **igraph** C library and cannot easily be modified to use the usual **igraph** R package.
By vendoring in the source code, we reduce our susceptibility to out-of-release-schedule changes in results due to **igraph** updates.
It also allows developers to access functionality that might yet not be available from the R bindings.

For downstream package developers, use of **Rigraphlib** is as simple as adding:

```
Imports: Rigraphlib
```

to the `DESCRIPTION`, and setting:

```bash
RIGRAPH_FLAGS=$(shell "${R_HOME}/bin${R_ARCH_BIN}/Rscript" -e 'Rigraphlib::pkgconfig("PKG_CPPFLAGS")')
PKG_CPPFLAGS=$(RIGRAPH_FLAGS)
RIGRAPH_LIBS=$(shell "${R_HOME}/bin${R_ARCH_BIN}/Rscript" -e 'Rigraphlib::pkgconfig("PKG_LIBS")')
PKG_LIBS=$(RIGRAPH_LIBS) $(LAPACK_LIBS) $(BLAS_LIBS) $(FLIBS) 
```

in the `src/Makevars`.
We use R's own BLAS and LAPACK libraries to avoid redundant recompilation of **igraph**'s vendored copies.

We can update the vendored copy of the source code with:

```bash
VERSION=1.0.0
url=https://github.com/igraph/igraph/releases/download/${VERSION}/igraph-${VERSION}.tar.gz
curl -L ${url} > sources.tar.gz

tar -xvf sources.tar.gz
rm -rf igraph
mv igraph-${VERSION} igraph
```
