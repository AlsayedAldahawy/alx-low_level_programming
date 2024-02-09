#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * a program that prints all possible different combinations of three digits.
 */

int main(void)
{
	int i = '0', j, k;

	while (i <= '8')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
