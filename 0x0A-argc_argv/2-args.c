#include <stdio.h>

/**
 *main -Entry point
 *@argc: Counts the number of parameters that go into main
 *@argv: Pointer of array of pointers containing strings entering main
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
