#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point of the function
 *@argc: argument count;
 *@argv: argument vector
 *
 * Description: Prints the min number of coins
 * to make change for an amount of money.
 *
 * Return: Always 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int i = 0;
	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", coins);
		return (0);
	}

	while (i < 5)
	{
		while (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
		i++;
	}
	printf("%d\n", coins);
	return (0);
}
