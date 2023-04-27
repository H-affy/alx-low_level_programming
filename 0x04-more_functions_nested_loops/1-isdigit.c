#include "main.h"

/**
 * _isdigit - check for digit
 * @c: The character to be checked
 *
 * Return: 1 for digits or 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
