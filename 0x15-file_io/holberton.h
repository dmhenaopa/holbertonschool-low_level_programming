#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* _HOLBERTON_H_ */
