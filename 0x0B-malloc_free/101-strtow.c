#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int wordCounter(char *str);

/**
 * strtow - Splits a string into words.
 * @str: String to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int i = 0, j = 0, words = 0, letters = 0, k = 0, n = 0, l = 0;
	char **arr;

	/*
	 * Variables:
	 * i: Iterating over the string str characters.
	 * j: Iterating over the pointers of the allocated arr.
	 * words: Number of words in the string.
	 * letters: Counting the letters inside each word.
	 * k: Counter for freeing allocated memories or assigning values to arr.
	 * n: Used to save the number of letters while decrementing.
	 * l: Handles the last character in the string.
	 */

	if (!str || !*str)
		return (NULL);

	words = wordCounter(str);

	if (!words)
		return (NULL);

	arr = malloc(sizeof(char *) * (words + 1));

	if (!arr)
		return (NULL);

	while (str[i])
	{
		if ((str[i] == ' ' && !letters) || (str[i] == ' ' && str[i - 1] == ' '))
		{
			i++;
			continue;
		}

		if (str[i] == ' ' || !str[i + 1])
		{
			if (!str[i + 1] && !(str[i] == 32))
				l = 0;
			else
				l = 1;

			arr[j] = malloc(sizeof(char) * (letters + l));

			if (!arr[j])
			{
				for (k = 0; k < j; k++)
					free(arr[k]);
				free(arr);
				return (NULL);
			}

			n = letters;

			for (k = 0; k <= n - l; k++)
				arr[j][k] = str[i - (letters--)];

			arr[j++][k] = '\0';
			letters = 0;
		}
		else
			letters++;

		i++;
	}
	arr[j] = NULL;
	return (arr);
}

/**
 * wordCounter - Counts words in a string.
 * @s: String.
 *
 * Return: Number of words.
 */
int wordCounter(char *s)
{
	int i = 0, words = 0;

	while (s[i])
	{
		if ((i && s[i] == ' ' && s[i - 1] != ' ') || (!s[i + 1] && s[i] != 32))
			words++;
		i++;
	}
	return (words);
}
