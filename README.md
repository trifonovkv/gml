# GTK Markup Language (GML)
GML is a user interface markup language. It is a declarative language for designing user interface for GTK.

gml - translator that gets the description of the user interface written in
the GML language and translates into a C code with using the GTK libraries.

## Dependencies                                                                                                                                                  
gcc flex bison gtk

## Installation

```Shell
git clone git@github.com:trifonovkv/gml.git
cd gml
make -f Makefile.dist
./configure
make
```

## Run

```Shell
./src/gml
./src/example/example
```
