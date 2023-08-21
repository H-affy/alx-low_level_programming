#include "main.h"

/**
 * _islower - Function that show if input is lowercase.
 * @c: The int value with ASCII value.
 *
 * Return: 1 for lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
