#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - Function that create a new file
 * @filename: the name of the file to be created pointer
 * @text_content: the string to write the file pointer
 *
 * Return: on success 1, and -1 on failure, -1 if filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fx, s, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	fx = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(fx, text_content, l);

	if (fx == -1 || s == -1)
		return (-1);
	close(fx);
	return (1);
}
