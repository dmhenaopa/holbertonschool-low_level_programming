#include "holberton.h"

/**
* read_textfile - C - File I/O
* @filename: Name of the file to read and print
* @letters: The number of letters it should read and print
*
* Description: A function that reads a text file and
* prints it to the POSIX standard output.
* Return: The actual number of letters it could read and print.
* Return 0 if the file cannot be opened or read, or filename
* is NULL or if write fails or does not write the expected amount
* of bytes.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t number_bytes, write_bytes;

	/*Verify if filename is NULL*/
	if (filename == NULL)
		return (0);
	/* Open file */
	file_descriptor = open(filename, O_RDONLY);
	/*Verify if the open function has error*/
	if (file_descriptor == -1)
		return (0);
	/* Read the file*/
	else
	{
		buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);
		number_bytes = read(file_descriptor, buffer, letters);
		/*Verify if file is empty*/
		if (number_bytes == -1)
			return (0);
		/*If not, print to the standard output the text*/
		else
		{
			write_bytes = write(STDOUT_FILENO, buffer, number_bytes);
			if (write_bytes == -1)
				return (0);

		}
	}
	free(buffer);
	close(file_descriptor);
	return (write_bytes);
}
