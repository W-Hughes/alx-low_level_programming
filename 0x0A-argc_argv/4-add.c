#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main - Entry point of code.
 *@argc: Arguments count.
 *@argv: Argument vector.
 *
 *Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
			if (!isdigit(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
