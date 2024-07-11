#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - Print the sum of the diagonals of square matrix.
 *@a: Matrix.
 *@size: Size of matrix
 *
 * Return: no value.
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
