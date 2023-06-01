#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charaxter to print
 *
 * Return: on success 1.
 * on Error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
