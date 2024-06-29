#include <stdio.h>
#include <math.h>

/**
 *main - Entry point of the code
 *@n: the number to check.
 *
 * Description: Prints the largest prime of integers from 2.
 *
 *Return: Always 0 (success);
 */

long maxPrimeFactor(long n);

int main(void)
{
	long number  = 612852475143;

	printf("%ld\n", maxPrimeFactor(number));

	return (0);
}

/**
 *maxPrimeFactor - Returns the largest prime number of any
 *given positive integer.
 *
 *@n: the number to check prime of;
 *
 * Return: largest prime.
 */


long maxPrimeFactor(long n)
{
	long maxPrime = 0;
	int i = 0;

	/**
	 * iff n % 2 = 0(even), iterate n to factor out the largest
	 * power of 2^n, and assign 'largestPrime' to 2.
	 * returns n % 2 = 1 (odd)
	 */
	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}

	/**
	 * at n % 2 = 1 (odd), iterate odds to factor out
	 * largest odd powers that are factors of n.
	 */

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
	}

	if (n > 2)
		maxPrime = n;

	return (maxPrime);
}
