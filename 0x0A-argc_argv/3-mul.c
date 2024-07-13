#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point of code.
 *@argc: Arguments count.
 *@argv: Argument vector.
 *
 *
 *Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	int product = 0;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
