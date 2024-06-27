#include <stdio.h>

/**
 * main - Entry point of the function.
 *
 * Description: Print the first 98 Fibonacci numbers, starting with 1 and 2.
 * The numbers should be separated by a comma followed by a space.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int counter;
	long int previousTerm = 1;
	long int currentTerm = 2;
	long int nextTerm;

	printf("%ld, %ld", previousTerm, currentTerm);

	for (counter = 3; counter <= 98; counter++)
	{

		nextTerm = previousTerm + currentTerm;
		printf(", %ld", nextTerm);

		previousTerm = currentTerm;
		currentTerm = nextTerm;
	}

	printf("\n");
	return (0);
}
