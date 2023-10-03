#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 * function should read and print.
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t o, r, w;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || w == -1 || r == -1 || r != w)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (w);
}
