## :pencil2: C - Dynamic libraries

### Requirements:
All commands were tested on Ubuntu 14.04 LTS. Although the commands might work well on other distributions, versions or operative systems. The programs and functions will be compiled with `gcc 4.8.4`. The prototypes of all the functions are included in the header file called  `lists.h`

### Usage:
For the C file, we need to use the compiler GCC:

    gcc -Wall -Werror -Wextra -pedantic all_the_c_files.c -o output_name

### Executable files:
Here a short description of each script/file:
+ libholberton.so: Dynamic library containing some dummy functions.
+ 1-create_dynamic_lib.sh: A script that creates a dynamic library called liball.so from all the .c files in the current directory.
+ 100-operations.so: Dynamic library that contains C functions that can be called from Python.
+ 100-operations.c: Functions with the neccesary operations to create a dynamic library. Additional to the header file operations.h.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTgxNDgxNjc4MV19
-->