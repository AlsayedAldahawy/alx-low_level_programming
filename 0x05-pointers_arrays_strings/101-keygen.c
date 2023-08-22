#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: 0 at success
 */
int main(void)
{
	int pass[100];
	int i, SUM = 0, j;

	srand(time(NULL));

	for (i = 0; i <= 100 - 1; i++)
	{
		pass[i] = rand() % 78;
		SUM = SUM + (pass[i] + '0');

		putchar(pass[i] + '0');

		if ((2772 - SUM) - '0' <= 78 - 1)
		{
			j = 2772 - SUM - '0';
			SUM += j;

			putchar(j + '0');

			break;
		}
	}

	return (0);
}
