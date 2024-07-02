#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints an elements of an array of integers.
 *@a: Array of integers.
 *@n: length of the array.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}

		i++;
	}


	printf("\n");
}
