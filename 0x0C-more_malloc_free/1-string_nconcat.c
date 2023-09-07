#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    long unsigned int size, i, j;

    if (n >= sizeof s2)
    {
        size = strlen(s1) + strlen(s2) + 1;
    }
    else
    {
        size = strlen(s1) + strlen(s2) + 1;
    }

    ptr = malloc(strlen(s1) + strlen(s2) + 1);
        if (ptr == NULL)
            return (NULL);

    for (i = 0, j = 0; i < size; i++)
    {
        if (i < strlen(s1))
        {
            ptr[i] = s1[i];
        }
        else
        {
            ptr[i] = s2[j];
            j++;
        }
    }
    ptr[size] = 0;
    
    return(ptr);
}
