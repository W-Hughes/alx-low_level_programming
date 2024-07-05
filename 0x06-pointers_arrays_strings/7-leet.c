#include "main.h"

/**
 *leet - Encodes a string argument into 1337.
 *@s: String to be encoded.
 *
 * Return: Encoded string.
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	int n = 5;

	char alph[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < n)
		{
			if (s[i] == alph[j] || (s[i] + 32 == alph[j]))
			s[i] = num[j];
			j++;
		}

		i++;
	}

	return (s);
}
