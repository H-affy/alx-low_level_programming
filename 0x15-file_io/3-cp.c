#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - creates 1024 bytes to a buffer.
 * @file: the buffer file name stroing the char for.
 *
 * Return: the newly created buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes file
 * @fd: the file to be closed
 */
void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy content from one file to another
 * @ac: Number of argument
 * @av: The array pointer to the argument
 *
 * Return: 0.
 *
 * Description: exit code 97, if argument count is not correct
 * exit code 98, if file_from can't be raed or does not exist
 * exit code 99, if file_to can't be written or created
 * exit code 100, if file_to or file_from can't be closed.
 */
int main(int ac, char *av[])
{
	int f0, t0, r0, w0;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(av[2]);
	f0 = open(av[1], O_RDONLY);
	r0 = read(f0, buffer, 1024);
	t0 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f0 == -1 || r0 == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
			exit(98);
		}
		w0 = write(t0, buffer, r0);
		if (t0 == -1 || w0 == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		r0 = read(f0, buffer, 1024);
		t0 = open(av[2], O_WRONLY | O_APPEND);
	} while (r0 > 0);
	free(buffer);
	close_file(f0);
	close_file(t0);
	return (0);
}
