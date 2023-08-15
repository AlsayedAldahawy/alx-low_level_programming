#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	long f0 = 1, f1 = 2, fn, sum;
	int i;

	for (i = 0; ; i++)
	{
		if (i == 0)
		{
			fn = f0;
		}
		else if (i == 1)
		{
			fn = f1;
		}
		else
		{
			fn = f1 + f0;
			f0 = f1;
			f1 = fn;
			if (fn > 4000000)
			{
				break;
			}
		}

		if ((fn % 2) == 0)
		{
			sum += fn;
		}

	}
	printf("%ld\n", sum);
	return (0);
}
