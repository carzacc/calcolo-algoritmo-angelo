#!/bin/sh
cd build;
g++ -c ../src/partite.cpp;
g++ -c ../src/seriea.cpp;
g++ -o ../bin/seriea partite.o seriea.o;
