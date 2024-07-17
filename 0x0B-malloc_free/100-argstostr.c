#include "main.h"
#include <stdlib.h>

/**
 *argstostr - Concats string arguments
 *@ac: Arguments counter
 *@av:Argument vector
 *
 * Return: Pointer to concat string, otherwise NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;	/*index to iterate the memory location*/
	int total_length = 0;	/* Total length of string arguments passed*/
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*Iterate through and count each char of string arguments.*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++;
	}

	/*Allocate 1 memory location to each string char, + 1*/
	new_string = malloc(total_length + 1);

	/*Return NULL if failure*/
	if (new_string == NULL)
		return (NULL);

	/*Iterate to concat into the new memory location*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_string[k] = av[i][j];
			k++;
		}
		new_string[k] = '\n';	/*add new ling*/
		k++;
	}
	new_string[k] = '\0';

	return (new_string);
}
