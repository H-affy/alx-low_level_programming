#include "main.h"

/**
 * _isalpha - show 1 if is a letter another  cases, show 0
 * @c: the cnaracter to be checked
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
