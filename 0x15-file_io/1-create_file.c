#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - The function that creates file.
 * @filename: The pointer that points to the file name.
 * @text_content: The pointer that points to the string to write to the file.
 *
 * Return: -1 if fail, and 1 on success
 * -1 if filaename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int n, m, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	n = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(n, text_content, l);

	if (n == -1 || m == -1)
		return (-1);
	close(n);
	return (1);
}
