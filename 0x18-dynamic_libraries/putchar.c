#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success.
 * on error, -1 is returned, and errno is set approprately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
