#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - Calculate natural square root of integer argument.
 *@n: NInteger argument to calculate natural square root of.
 *
 * Return: Natural square toot if ther is, otherwise -1.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - Calculates natrual square root of an integer.
 *@n: Integer argumane to calculate natural square root of.
 *@i: counter
 *
 * Return: Natural square toot if ther is, otherwise -1.
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
