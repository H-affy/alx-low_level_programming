#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to search.
 * @index: the given index of the bit.
 *
 * Return: the value of the bit at index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int s;

	if (index > 80)
		return (-1);
	s = (n >> index) & 1;
	return (s);
}
