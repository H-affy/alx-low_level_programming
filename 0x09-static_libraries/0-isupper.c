#include "main.h"

/**
 * _isupper - Check for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 for uppercase and 0 for other wise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
