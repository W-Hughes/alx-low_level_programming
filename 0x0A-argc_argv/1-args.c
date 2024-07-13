#include "stdio.h"

/**
 *main - prints the number of args
 *@argc: argument count
 *@argv: Array of string arguments
 *
 *Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
