#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file
 * @filename: the pointer to the name of the file to be appended.
 * @text_content: the pointer to the string to append text.
 *
 * Return: 1 on success, -1 on failure, and -1 if the filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d, s, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	d = open(filename, O_WRONLY | O_APPEND);
	s = write(d, text_content, l);

	if (d == -1 || s == -1)
		return (-1);
	close(d);
	return (1);
}
