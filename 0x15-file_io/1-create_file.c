#include "holberton.h"

/**
* create_file -C - File I/O
* @filename: Name of the file to create
* @text_content: NULL terminated string to write to the file
*
* Description: A function that creates a file.
* Return: 1 on success, -1 on failure (file cannot be created, written.
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, i, counter;
	ssize_t write_bytes;

	counter = 0;
	/*Guard code*/
	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	/* If the creation fails*/
	if (file_descriptor == -1)
		return (-1);

	/* If text_content is NULL*/
	if (text_content == NULL)
	{
		file_descriptor = open(filename, O_CREAT, 00600);
		if (file_descriptor == -1)
		{
			return (-1);
		}
		return (1);
	}

	/*Count how many chars have text_content*/
	for (i = 0; text_content[i] != '\0'; i++)
		counter++;

	/*Write the file with text_content*/
	write_bytes = write(file_descriptor, text_content, counter);
	if (write_bytes == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
