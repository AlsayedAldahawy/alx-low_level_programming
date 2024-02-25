#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generating random password.
 * Return: always zero at success.
*/

int main(void)
{
	int i = 0, x;
	char ch;

	/**
	 * generating random number using time(), srand(), rand() functions.
	*/

	srand(time(NULL));

	 x = rand() % 10000;
	while (i <= x)
	{
		ch = rand() % 128;
		while(ch < ' ')
		{
			ch = rand() % 128;
		}
		putchar(ch);
		i = i + ch;
	}
	return (0);
}
