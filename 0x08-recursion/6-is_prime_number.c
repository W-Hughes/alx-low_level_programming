#include "main.h"

/**
 *is_prime_number - Checks if an integer argument is a prime.
 *@n: Integer argument to check prime of.
 *
 * Return: 1 if integer argument is prime, otherwise 0.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 *check_prime - Cehecks if an integer argument is a prime.
 *@n: The integer argument to check prime of.
 *@i: Iteration times
 *
 * Return: 1 if integer argument is prime, otherwise 0.
 */

int check_prime(int n, int i)
{
	if (n < i)
		return (0);
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
