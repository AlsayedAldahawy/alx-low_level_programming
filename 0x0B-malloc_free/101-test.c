#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int wordCounter(char *str);

/**
 * strtow - a function that splits a string into words.
 * @str: string to be splitted.
 *
 * Return: The function returns a pointer to an array of strings (words)
 * Each element of this array should contain a single word, null-terminated
 * **____*The last element of the returned array should be NULL*_____**
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */

char **strtow(char *str)
{
    int i = 0, j = 0, words = 0, letters = 0, k = 0, n = 0, s;
    char **arr;

    words = wordCounter(str);
	if (str == NULL || *str == '\0' || !words)
	{
		return (NULL);
	}

    printf("words: %i\n", words);
    
    arr = malloc(words * sizeof(char *));
    if (arr == NULL)
        return (NULL);
    
    for (i = 0; i < words; i++)
    {
        letters = 0;
        while (str[j])
        {
            if (str[j] != ' ')
            {
                letters++;
            }
            if (str[j] == ' ' && letters > 0)
            {
                break;
            }
            j++;
        }
        printf("letters: %i\n", letters);
        arr[i] = malloc((letters * sizeof(char)) + 1);
        if (arr[i] == NULL)
		{
			free(arr);
			for (k = 0; k <= i; k++)
				free(arr[k]);
			return (NULL);
		}

        for (k = n, s = 0; k < j; k++)
        {
            if (str[k] != ' ')
            {
                arr[i][s] = str[k];
                s++;
            }
        }
        arr[i][s] = '\0';
        n = j;
    }
    return (arr);   
    
}

/**
 * wordCounter - counts words in a string.
 * @str: string.
 *
 * Return: number of words.
 */

int wordCounter(char *str)
{
	int i = 0, words = 0;

	while (str[i])
	{
		if ((str[i] == 32 && i && str[i - 1] != 32) || (!str[i + 1] && str[i] != 32))
		{
			words++;
		}
		i++;
	}
	return (words);
}
