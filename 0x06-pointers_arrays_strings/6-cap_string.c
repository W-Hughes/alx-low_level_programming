#include "main.h"

/**
 *cap_string - Capitalizes words in a string
 *@ptr: the string to be modified.
 *
 * Description: Captalizes words in a string.
 *
 * Return: Pointer to the capitalized string.
 */

char *cap_string(char *ptr)
{
	int i = 0;
	int j;
	char d[] = {
		' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '\n', '\t', '}',
	};
	int delimitLen = 13;

	while (ptr[i])
	{
		if (i == 0 && ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] -= 32;
		}
		else
		{
			for (j = 0; j < delimitLen; j++)
			{
				if (ptr[i - 1] == d[j] && ptr[i] >= 'a' && ptr[i] <= 'z')
				{
					ptr[i] -= 32;
					break;
				}
			}
		}
	i++;

	}

	return (ptr);
}
