#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_args - checks for the correct number of arguments
 * @argc: number of arguments
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_exr - checks that file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @fd_f: file descriptor of file_from, or -1
 * @fd_t: file descriptor of file_to, or -1
 */
void check_exr(ssize_t check, char *file, int fd_f, int fd_t)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_f != -1)
			close(fd_f);
		if (fd_t != -1)
			close(fd_t);
		exit(98);
	}
}

/**
 * check_cr - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @fd_f: file descriptor of file_from, or -1
 * @fd_t: file descriptor of file_to, or -1
 */
void check_cr(ssize_t check, char *file, int fd_f, int fd_t)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_f != -1)
			close(fd_f);
		if (fd_t != -1)
			close(fd_t);
		exit(99);
	}
}

/**
 * check_close - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 */
void check_close(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_f, fd_t, close_t, close_f;
	ssize_t r_len, w_len;
	char buff[1024];
	mode_t perm;

	check_args(argc);
	fd_f = open(argv[1], O_RDONLY);
	check_exr((ssize_t)fd_f, argv[1], -1, -1);
	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
	check_cr((ssize_t)fd_t, argv[2], fd_f, -1);
	r_len = 1024;
	while (r_len == 1024)
	{
		r_len = read(fd_f, buff, 1024);
		check_exr(r_len, argv[1], fd_f, fd_t);
		w_len = write(fd_t, buff, r_len);
		if (w_len != r_len)
			w_len = -1;
		check_cr(w_len, argv[2], fd_f, fd_t);
	}
	close_t = close(fd_t);
	close_f = close(fd_f);
	check_close(close_t, fd_t);
	check_close(close_f, fd_f);
	return (0);
}
