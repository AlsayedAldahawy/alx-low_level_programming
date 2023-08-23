#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generating random password.
 * Return: always zero at success.
*/

int main(void)
{
	int i, ch;

	/**
	 * generating random number using time(), srand(), rand() functions.
	*/

	srand(time(NULL));
	while (i <= 2646)
	{
		ch = rand() % 120;
		putchar(ch);
		i = i + ch;
	}
	putchar(2772 - i);
	return (0);
}
