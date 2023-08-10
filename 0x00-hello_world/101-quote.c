#include <unistd.h>

/**
 * main - the entry point of the program that prints a specific quote.
 * Return: returns the value (1) when successfully executed
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
