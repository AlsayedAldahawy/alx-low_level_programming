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
	int i = 2, PF;
	unsigned long NUM_Remain = 612852475143;
	int NUM_root = sqrt(612852475143);


	while (i <= NUM_root)
	{
		if ((NUM_Remain % i) == 0)
		{
			PF = i;
			NUM_Remain = NUM_Remain / i;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", PF);
	return (0);
}
