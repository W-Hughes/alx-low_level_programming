#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point of code.
 *
 *Description: Function that prints a random int and annotates if
 *the return value is a positive or negative integer using if
 *conditional flow.
 *
 * Return: 0 (end of function)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
