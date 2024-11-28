#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int sign = 1;
	int trigger = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		while (s[i] >= '0' && s[i] <= '9')
		{
			trigger = 1;
			result = (result * 10) + (s[i] - '0');
			i++;
		}

		if (trigger == 1)
		{
			break;
		}

		i++;
	}

	result *= sign;
	return (result);
}
