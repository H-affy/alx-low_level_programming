#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

char *create_buffer(char *filename);
void close_file(int fd);

/**
 * create_buffer - The function that allocate 1024 bytes to a buffer.
 * @filename: The pointer that points to the name of the file
 *
 * Return: The new allocated buffer.
 */
char *create_buffer(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - The function that closes file
 * @fd: file dexcriptor.
 */
void close_file(int fd)
{
	int n;

	n = close(fd);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - check the code.
 * @ac: Numbers of argumnets supplied to the program
 * @av: Array of pointers.
 *
 * Return: 0.
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int ac, char *av[])
{
	int prom, so, n, m;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(av[2]);
	prom = open(av[1], O_RDONLY);
	n = read(prom, buff, 1024);
	so = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (prom == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n",
					av[1]);
			free(buff);
			exit(98);
		}
		m = write(so, buff, n);
		if (so == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}
		n = read(prom, buff, 1024);
		so = open(av[2], O_WRONLY | O_APPEND);
	} while (n > 0);
	free(buff);
	close_file(prom);
	close_file(so);
	return (0);
}
