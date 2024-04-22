#include "main.h"
#include <stdio.h>

/**
 * len_str -  a function that calculates
 * length of string.
 *
 * @s: string.
 *
 * Return: the length.
 *
 */

int len_str(char *s)
{
	if (!*s)
		return (0);

	return (1 + len_str(s + 1));
}

/**
 * _palindrome -  a function that returns 1
 * if a string is a palindrome and 0 if not.
 * An empty string is a palindrome.
 *
 * @s1: pointer to string.
 * @s2: pointer to the last character of the same string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int _palindrome(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);

	if (s1 >= s2)
		return (1);

	return (_palindrome(s1 + 1, s2 - 1));
}

/**
 * is_palindrome -  a function that returns 1
 * if a string is a palindrome and 0 if not.
 * An empty string is a palindrome.
 *
 * @s: string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int is_palindrome(char *s)
{
	/**
	 * we need to find the length of the string first
	 */

	/**
	 * now we need to compare between the first and last letters, then between
	 * the second letter and the second to the last .. etc
	 * to do that, we will need two pointers, one to point to the first letter and
	 * will be incremented, the other points to the last letter is decremented.
	 */

	return (_palindrome(s, s + len_str(s) - 1));
}
