#include <stdio.h>

/**
 *main - Entry point of the function.
 *
 *Description: Print the first and second term of the
 *sequence and then the third term: Reset the second in first,
 *the second to next, and the next to the sum of the predecessors
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int counter = 1;
	int countLimit = 50;

	long int previousTerm = 1;
	long int currentTerm = 2;
	long int nextTerm;

	printf("%ld, %ld, ", previousTerm, currentTerm);

	for (counter = 3; counter <= countLimit; counter++)
	{
		nextTerm = previousTerm + currentTerm;

		if (counter == countLimit)
			printf("%ld\n", nextTerm);
		else
			printf("%ld, ", nextTerm);

		previousTerm = currentTerm;
		currentTerm = nextTerm;
	}

	return (0);
}
