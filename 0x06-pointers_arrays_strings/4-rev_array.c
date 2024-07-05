#include "main.h"

/**
 *reverse_array - Reverses the conteent of an arry of integers.
 *@a: the array to reverse.
 *@n: the number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;
	int *ptr = a + n - 1;	/* Set the ptr to the last element of the array*/

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = *ptr;
		*ptr = temp;
		ptr--;
		i++;
	}
}
