#include <stdio.h>

/**
 * main - Entry point of the function.
 *
 * Description: Calculate and print the sum of even-valued terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int previousTerm = 1;
	long int currentTerm = 2;
	long int nextTerm;
	long int sumEvenTerms = 0;

	while (currentTerm <= 4000000)
	{

		if (currentTerm % 2 == 0)
		{

			sumEvenTerms += currentTerm;
		}

		nextTerm = previousTerm + currentTerm;
		previousTerm = currentTerm;
		currentTerm = nextTerm;
	}
	printf("%ld\n", sumEvenTerms);
	return (0);
}
