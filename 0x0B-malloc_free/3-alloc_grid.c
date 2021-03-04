#include <stdlib.h>
#include "holberton.h"
/**
* alloc_grid - C - malloc, free
* @width: Dimensions of matrix
* @height: Dimensions of matrix
*
* Description: Write a function that returns a
* pointer to a 2 dimensional array of integers.
* Return: Pointer to an array of integers or NULL
* if the dimensions are 0 or negative.
*/
int **alloc_grid(int width, int height)
{
	int i, j, **matrix;

	/*Possible errors*/
	if (width == 0 || height == 0)
		return (NULL);

	/*Assign memory space first column*/
	matrix = malloc(sizeof(int *) * height);

	/*If array is NULL -return NULL*/
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/*Assign memory space first row*/
		matrix[i] = malloc(sizeof(int) * width);

		/*
		* If array is NULL -return NULL and if has an error
		* freed memory with free()
		*/
		if (matrix == NULL)
		{
			for ( ; i >= 0; i--)
				free(matrix[i]);

			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
