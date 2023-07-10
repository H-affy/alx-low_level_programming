#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - The function that appends text at the end of a file.
 * @filename: The pointer that points to the filr name
 * @text_content: The pointer taht points the  string to add at the
 * end of the file.
 *
 * Return: -1 if fail, and 1 on success,
 * -1 if filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}
