#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Allocates memory for 2D arry and
 *	initialize each element with 0;
 *@width: Width of the grid.
 *@height: height of the grid.
 *
 *Return: Pointer to a 2D array, otherwise NULL if failure.
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i;
	int j;

	/* Checks if both width and height are 0 or less*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Memory allocation for array of pointers*/
	s = malloc(sizeof(int *) * height);

	/* Returns null on failure of allocation.*/
	if (s == NULL)
		return (NULL);

	/* Allocate memory for rows*/
	for (i = 0; i < height; i++)
	{
		/* Allocate memory for rows of 'width' integers*/
		s[i] = malloc(sizeof(int) * width);
		/* Free memory on failure.*/
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}
	/* Initialize each element with 0, */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
