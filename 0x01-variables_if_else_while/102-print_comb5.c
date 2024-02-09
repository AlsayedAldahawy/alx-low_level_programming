#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * a program that prints all possible different combinations off two two-digit numbers.
 */

int main(void)
{
	int i1 = '0', i2 = '0', j1, j2;

	for (i1 = '0'; i1 <= '9'; i1++)
	{
		for (i2 = '0'; i2 <= '9'; i2++)
		{

			for (j1 = i1; j1 <= '9'; j1++)
			{
				for (j2 = i2; j2 <= '9'; j2++)
				{
					if (i1 == j1 && i2 == j2)
					{
						continue;
					}
					putchar(i1);
					putchar(i2);
					putchar(' ');
					putchar(j1);
					putchar(j2);
					if (!(i1 == '9' && i2 == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}	
		}
	}
	putchar('\n');
	return (0);
}
