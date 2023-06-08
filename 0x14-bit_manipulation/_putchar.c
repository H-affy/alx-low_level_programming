#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to print.
 *
 * Return: 1 on success
 * om error, -1 is return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}