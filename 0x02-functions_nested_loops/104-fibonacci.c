#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	unsigned long Fn_lft, Fn_rgt, F1_lft = 0, F2_lft = 0, F1_rgt = 1, F2_rgt = 2;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (i < 2)
		{
			Fn_lft = 0;
			Fn_rgt = F1_rgt + (F2_rgt * ((float)i / 2));
		}
		else
		{
			Fn_lft = F1_lft + F2_lft;
			Fn_rgt = F1_rgt + F2_rgt;

			if (((Fn_rgt) / (1000000)) > 0)
			{
				Fn_lft++;
				Fn_rgt = Fn_rgt % (1000000);
			}
			F1_lft = F2_lft;
			F1_rgt = F2_rgt;
			F2_lft = Fn_lft;
			F2_rgt = Fn_rgt;
		}
		if (Fn_lft == 0)
		{
			printf("%lu", Fn_rgt);
		}
		else
		{
			printf("%lu%lu", Fn_lft, Fn_rgt);
		}
		i != 97 ? printf(", ") : printf("\n");
	}
	return (0);
}
