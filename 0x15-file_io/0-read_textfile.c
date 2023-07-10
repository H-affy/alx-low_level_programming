#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - The function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The pointer that points to the name of the file
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print,
 * 0 if the file can not be opened or read, and 0 if the
 * filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	y = read(x, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(x);

	return (z);
}
