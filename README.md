# GTK Markup Language (GML)
GML is a user interface markup language. It is a declarative language for designing user interface for GTK.

gml - translator that gets the description of the user interface written in
the GML language and translates into a C code with using the GTK libraries.

## Dependencies                                                                                                                 
### Fedora
```Shell
dnf install automake libtool bison flex gtk3-devel
```
### Ubuntu
```Shell
apt install git automake bison flex libgtk-3-dev libtool-bin
```

## Installation

```Shell
git clone https://github.com/trifonovkv/gml.git
cd gml
make -f Makefile.dist
./configure
make
```

## Run

```Shell
./src/gml
```

## Examples
```Shell
./src/example/window/window
./src/example/header_bar/header_bar
./src/example/scrolled_window/scrolled_window
```
