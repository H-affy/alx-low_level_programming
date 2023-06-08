#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get.
 * from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int s;
	unsigned long int l = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		s = l >> x;
		if (s & 1)
			y++;
	}
	return (y);
}
