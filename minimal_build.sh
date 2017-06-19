#!/bin/bash
g++ -I. -I/home/greensocs/Projects/systemc-2.3.1/release/include -L/home/greensocs/Projects/systemc-2.3.1/release/lib-linux64 -lsystemc add.cpp
LD_LIBRARY_PATH=/home/greensocs/Projects/systemc-2.3.1/release/lib-linux64 ./a.out
