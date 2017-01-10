#!/bin/sh
g++ -o bop main.cpp bib.cpp vivod.cpp -L./ -lutili
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./
export LD_LIBRARY_PATH