#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 0x00ff;
	/**
	 * x = 0000 ... 1111 1111, if Little Endian
	 * x = 1111 1111 ... 0000, if Big Endian
	 */
	return (x & 1);
}
