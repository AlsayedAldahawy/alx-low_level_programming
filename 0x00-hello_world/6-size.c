#include <stdio.h>

/**
 *  main - is the entry point function to the program
 *  Return: program should return 0 when successfully executed
 */
int main(void)
{
		int i;
		long int l_i;
		long long int lli;
		char c;
		float f;

		printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
		printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l_i));
		printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
		printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
		return (0);
}
