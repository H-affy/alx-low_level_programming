#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: String that contains the binary number
 *
 * Return: Converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int m = 0;

	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		m = 2 * m + (b[n] - '0');
	}
	return (m);
}
