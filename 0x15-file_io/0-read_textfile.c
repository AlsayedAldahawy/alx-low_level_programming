#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 *                 it to the POSIX standard output.
 *
 * @letters: is the number of letters it should read and print.
 * @filename: name of the file to be read.
 *
 * Return: the actual number of letters it could read and print.
 *         if the file can not be opened or read, return 0.
 *         if filename is NULL return 0.
 *         if write fails or does not write the expected amount
 *			of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *op;
	char *buffer;
	size_t x;

	if (!filename || !letters)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	for (x = 0; x < letters; x++)
	{
		*(buffer + x) = 0;
	}

	if (!buffer)
		return (0);

	op = fopen(filename, "r");

	if (!op)
		return (0);

	fread(buffer, sizeof(char), letters, op);
	for (x = 0; buffer[x]; x++)
	{
		printf("%c", buffer[x]);
	}


	free(buffer);
	fclose(op);
	return (x);
}
