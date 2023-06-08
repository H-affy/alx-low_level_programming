#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the string containing the binary number.
 *
 * Return: the coverted number, or 0 and 1 if there one or more
 * number in string b, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int var;
	unsigned int myvar = 0;

	if (!b)
		return (0);
	for (var = 0; b[var]; var++)
	{
		if (b[var] < '0' || b[var] > '1')
			return (0);
		myvar = 2 * myvar + (b[var] - '0');
	}
	return (myvar);
}
