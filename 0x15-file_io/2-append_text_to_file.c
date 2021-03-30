#include "holberton.h"

/**
* append_text_to_file - C - File I/O
* @filename: The name of the file
* @text_content: The NULL terminated string to add at
* the end of the file.
*
* Description: A function that appends text at the end of a file.
* Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, i, counter;
	ssize_t write_bytes;

	counter = 0;
	/*Guard code*/
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	/*Only to append the text_content*/
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	/*Count the number of characters in text_content*/
	for (i = 0; text_content[i] != '\0'; i++)
		counter++;

	/* Write at the end of the file*/
	write_bytes = write(file_descriptor, text_content, counter);
	if (write_bytes == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
