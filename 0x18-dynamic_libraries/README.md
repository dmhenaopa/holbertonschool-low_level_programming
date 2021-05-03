## :pencil2: C - Dynamic libraries
This folder contains C, bash scripts, and Dynamic libraries to exemplify the creation and use of C Dynamic libraries even in Python.

### Requirements:
All commands were tested on Ubuntu 14.04 LTS. Although the commands might work well on other distributions, versions or operative systems. The programs and functions will be compiled with `gcc 4.8.4`. The prototypes of all the functions are included in the header file called  `lists.h`

### Usage:
For the C file, we need to use the compiler GCC:
`gcc -Wall -Werror -Wextra -pedantic all_the_c_files.c -o output_name`

For the Dynamic libraries: 
For incluide the library, use the flag -l with the name of the library. In this example we have the library holberton (libholberton.so):
`gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len`

For incluide the C library in Python files, you need to include something like this in the Python file:
`cops = ctypes.CDLL('./100-operations.so')`

For the shell scripts, verify that the files have execution permissions before being used! **If not, use the following command:**

    chmod u+x name_of_file ###To make the file executable

The way to execute this scripts is by putting a dot and a slash before the command name. As follows:

    `./name_of_file ###To execute the file`

### Executable files:
Here a short description of each script/file:
+ [libholberton.so](https://github.com/dmhenaopa/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/libholberton.so): Dynamic library containing some dummy functions.
+ [1-create_dynamic_lib.sh](https://github.com/dmhenaopa/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/1-create_dynamic_lib.sh): A script that creates a dynamic library called liball.so from all the .c files in the current directory.
+ [100-operations.so](https://github.com/dmhenaopa/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/100-operations.so): Dynamic library that contains C functions that can be called from Python.
+ [100-operations.c](https://github.com/dmhenaopa/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/100-operations.c): Functions with the neccesary operations to create a dynamic library. Additional to the header file [operations.h](https://github.com/dmhenaopa/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/operations.h).
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTA0OTA2Mjk3MiwtMjA0Mzg2MDgwOCwxOD
E0ODE2NzgxXX0=
-->