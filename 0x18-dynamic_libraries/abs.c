#include "main.h"

/**
 * _abs - function that compute the absolute value of an int
 * @n: The int value
 *
 * Return: Absolute value.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
