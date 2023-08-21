#include "main.h"

/**
 * _isalpha - show 1 if is a letter, and 0 if otherwise.
 * @c: The int value
 *
 * Return: 1 if is a letter, 0 otherwise.
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
}
