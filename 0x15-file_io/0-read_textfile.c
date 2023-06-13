#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text and print it to POSIX standard output.
 * @filename: the text to be read.
 * @letters: the letters to be read.
 *
 * Return: The actual number it could read and and print,
 * and 0 if it cannot be open or read and if the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *core;
	ssize_t fd;
	ssize_t t;
	ssize_t x;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	core = malloc(sizeof(char) * letters);
	x = read(fd, core, letters);
	t = write(STDOUT_FILENO, core, x);
	free(core);
	close(fd);
	return (t);
}
