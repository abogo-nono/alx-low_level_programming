#!/bin/bash
gcc -c -fPIC *.c -o src.o
gcc -shared -o liball.so src.o
