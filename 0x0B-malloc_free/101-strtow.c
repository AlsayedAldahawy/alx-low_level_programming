#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int wordsCounter(char *str);

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **arr;
	int i = 0, j = 0, k, l, m = 0, words, letters = 0;

	if (!str || !*str)
		return (NULL);

	words = wordsCounter(str);

	/* Allocate memory for pointers to each word and the NULL */
	arr = malloc(sizeof(char *) * (words + 1));

	if (!arr)
		return (NULL);

	while (str[i])
	{
		if (str[i] == 32 && str[i - 1] == 32)
		{
			i++;
			continue;
		}

		letters++;

		if (str[i] == 32 || !str[i + 1])
		{
			if (!str[i + 1])
				m = 1;

			/* Allocate memory for each word */
			arr[j] = malloc(sizeof(char) * (letters + m));

			if (!arr[j])
			{
				/* Free all allocated memory and return NULL */
				for (i = 0; i < j; i++)
					free(arr[i]);
				free(arr);
				return (NULL);
			}

			l = letters;
			for (k = 0; k < l - 1 + m; k++)
			{

				arr[j][k] = str[i - letters + 1];
				letters--;
			}
			arr[j++][k] = '\0';
			letters = 0;
		}

		i++;
	}
	arr[j] = NULL;

	return (arr);
}

/**
 * wordsCounter - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int wordsCounter(char *str)
{
	int wc = 0, i = 0;

	while (str[i])
	{
		if ((i && str[i] == 32 && str[i + 1] != 32) || !str[i + 1])
			wc++;
		i++;
	}

	return (wc);
}
