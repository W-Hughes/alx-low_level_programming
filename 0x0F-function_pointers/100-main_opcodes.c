#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point of the code the prints opcodes of its function
 *@argc: Number of std_input arguments
 *@argv: Array of input arguments
 *
 *Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int number_of_bytes;
	int i = 0;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (unsigned char *)main;

	while (i < number_of_bytes)
	{
		printf("%02x", main_ptr[i]);

		if (i != number_of_bytes - 1)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);

}
