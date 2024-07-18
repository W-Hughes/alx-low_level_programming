#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - Concats two string arguments.
 *@s1: First string argument
 *@s2: Second string argument.
 *@n: first n bytes of s2 to copy;
 *
 * Return: Pointer to new memory space, otherwise NULL
 *	if failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int ls1 = 0;
	unsigned int ls2 = 0;
	unsigned int tl = 0;
	unsigned int i;
	unsigned int j;

	/* Treat NULL argument as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Calculates the length of s1 and s2*/
	while (s1[ls1])
		ls1++;
	while (s2[ls2])
		ls2++;
	/*Adjust len of s2 to n, if n is smaller that length of s2 */
	if (n >= ls2)
		n = ls2;

	/*Find the total length as sum of length of s1 and n bytes of s2*/
	tl = ls1 + n;

	str = malloc(tl + 1);	/*Allocate memory*/

	if (str == NULL)	/*Return NUlL if malloc fails*/
		return (NULL);

	for (i = 0; i < ls1; i++)	/*Copy s1 to new string*/
		str[i] = s1[i];

	/*Append the first n char of s2 to new string*/
	for (j = 0; j < n; j++)
		str[ls1 + j] = s2[j];

	str[tl] = '\0'; /*Null terminate the new string*/
	return (str);

}
