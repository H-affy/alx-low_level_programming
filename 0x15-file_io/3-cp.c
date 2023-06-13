#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fx);

/**
 * create_buffer - allocates 1024 bytes to a buffer
 * @file: the file buffer storing for char
 *
 * Return: pointer to the new allocated buffer.
 */
char *create_buffer(char *file)
{
	char *p;

	p = malloc(sizeof(char) * 1024);

	if (p == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (p);
}

/**
 * close_file - Function that closes file descriptors.
 * @fx: file decriptor to be closed.
 */
void close_file(int fx)
{
	int h;

	h = close(fx);

	if (h == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fx %d\n", fx);
		exit(100);
	}
}

/**
 * main - copy the content of a file to another file.
 * @ac: the arguments supplied to the program
 * @av: Array pointer to the program.
 *
 * Return: 0.
 */
int main(int ac, char *av[])
{
	int f, s, l, h;
	char *p;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	p = create_buffer(av[2]);
	f = open(av[1], O_RDONLY);
	l = read(f, p, 1024);
	s = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || l == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
			free(p);
			exit(98);
		}
		h = write(s, p, l);
		if (s == -1 || h == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n",
					av[2]);
			free(p);
			exit(98);
		}
		l = read(f, p, 1024);
		s = open(av[2], O_WRONLY | O_APPEND);
	} while (l > 0);
	{
		free(p);
		close_file(f);
		close_file(s);
		return (0);
	}
}
