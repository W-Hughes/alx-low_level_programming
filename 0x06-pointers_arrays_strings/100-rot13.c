#include "main.h"

/**
 *rot13 - Encodes a string argument using rot13
 *@ptr: String to be encoded.
 *
 * Return: Encoded string.
 */

char *rot13(char *ptr)
{
	int i = 0;

	while (ptr[i])
	{
		while ((ptr[i] >= 'a' && ptr[i] <= 'z') || (ptr[i] >= 'A' && ptr[i] <= 'Z'))
		{
			if ((ptr[i] <= 'm' && ptr[i] >= 'a') || (ptr[i] <= 'M' && ptr[i] >= 'A'))
			{
				ptr[i] += 13;
				break;
			}

			ptr[i] -= 13;
			break;
		}

		i++;
	}

	return (ptr);
}
