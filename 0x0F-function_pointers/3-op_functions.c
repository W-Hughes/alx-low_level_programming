#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - Returns the sum of two int arguments
 *@a: First int argument.
 *@b: Second int argument.
 *
 *Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 *op_sub - Returns the difference of two int arguments
 *@a: First int argument.
 *@b: Second int argument.
 *
 *Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 *op_mul - Returns the product of two int arguments
 *@a: First int argument.
 *@b: Second int argument.
 *
 *Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 *op_div - Returns the result of dividing two int arguments
 *@a: First int argument.
 *@b: Second int argument.
 *
 *Return: Quotient or result of dividing a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return ((a) / (b));
}

/**
 *op_mod - Returns the remainder of two int arguments
 *@a: First int argument.
 *@b: Second int argument.
 *
 *Return: Remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
