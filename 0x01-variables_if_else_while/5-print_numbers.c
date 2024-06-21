#include <stdio.h>

/**
 *main - Entry point of the code.
 *
 *Description: A function that prints all the digits starting from 0;
 *
 *Return: always 0 (successful)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");

	return (0);

}
