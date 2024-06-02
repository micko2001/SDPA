#!/bin/bash

# Compile source files
gcc -c table.c -o table.o
gcc -c sort.c -o sort.o
gcc -c search.c -o search.o
gcc -c main.c -o main.o

# Link object files and create executable
gcc table.o sort.o search.o main.o -o main

# Run the executable
./main
