#!/bin/bash
gcc -fPIC ./*.c -o all_files_c.o
gcc -shared all_files_c.o -o liball.so
