#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * a program that prints all possible different combinations of two digits.
 */

int main(void)
{
	int i = '0', j;

	while (i <= '8')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
