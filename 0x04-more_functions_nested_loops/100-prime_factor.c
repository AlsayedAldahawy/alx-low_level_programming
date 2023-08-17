#include <stdio.h>
#include <math.h>

/**
 * main - a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line.
 *
 * Return: return 0 if success.
*/

int main(void)
{
	int i = 2;
	unsigned long Hi_PF = 612852475143;
	int NUM_root = sqrt(612852475143);


	while (i <= NUM_root)
	{
		if ((Hi_PF % i) == 0)
		{
			Hi_PF = Hi_PF / i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", Hi_PF);
	return (0);
}
