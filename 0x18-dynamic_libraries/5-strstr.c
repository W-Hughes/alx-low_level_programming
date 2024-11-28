#include "main.h"
#include <string.h>

/**
 *_strstr - Locates a substring
 *@haystack: The string to search
 *@needle: The string to match
 *
 * Return: Pointer to the substring, otherwise NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		if (*haystack == needle[0])	/*Finds a matching character*/

		{
			int i = 0;

			while (needle[i] != '\0' && haystack[i] != '\0' && needle[i] == haystack[i])
			{
				i++;	/*Matches every other byte of the substring to*/
					/*every other character in the the string*/
			}

			if (needle[i] == '\0')
				return (haystack);	/*Returns pointer to the located string*/
		}
		haystack++;
	}
	return (NULL);
}
