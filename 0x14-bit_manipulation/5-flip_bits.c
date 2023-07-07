#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - The function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: The number to flip
 * @m: The number that n will be flipped to.
 *
 * Return: Necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, b = 0;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}
	return (b);
}
