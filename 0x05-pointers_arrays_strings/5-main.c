#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[13] = "My Schoollll";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
