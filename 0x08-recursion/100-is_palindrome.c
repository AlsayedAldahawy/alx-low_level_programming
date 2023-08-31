#include "main.h"
#include <stdio.h>

/**
 * is_palindrome -  a function that returns 1 if a string is a palindrome and 0 if not.
 * An empty string is a palindrome.
 *
 * @s: string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */
int len_str(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + len_str(s + 1));
}

int str_chk_palin(char *s, int len)
{
	if (len <= 0)
	{
		return (1);
	}

	if (*s != *(s + len - 1))
	{
		return (0);
	}
	
	return(str_chk_palin(s + 1, len - 1));
}

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	return (str_chk_palin(s, len_str(s)));
}
