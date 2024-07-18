#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *count_words - Count the number of words in a string.
 *@str: the string argument to count.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int number_of_words = 0;

	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str)
		{
			number_of_words++;
			while (*str && *str != ' ')
				str++;
		}
	}
	return (number_of_words);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i = 0;
	int j = 0;
	int k;
	int l;
	int num_of_words;
	int word_len;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_of_words = count_words(str);
	if (num_of_words == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (num_of_words + 1));
	if (words == NULL)
		return (NULL);
	for (k = 0; k < num_of_words; k++)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != ' ')
			word_len++;
		words[k] = malloc((word_len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (l = 0; l < k; l++)
				free(words[l]);
			free(words[l]);
			return (NULL);
		}
		for (j = 0; j < word_len; j++)
			words[k][j] = str[i + j];
		words[k][word_len] = '\0';
		i += word_len;
	}
	words[num_of_words] = NULL;
	return (words);
}
