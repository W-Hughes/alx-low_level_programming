#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - Performs simple operations based on user input.
 *@argc: Number of arguments passed
 *@argv: Array of passed arguments.
 *
 *Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);

}
