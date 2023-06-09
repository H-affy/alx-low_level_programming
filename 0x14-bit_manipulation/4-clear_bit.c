#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number to change pointer.
 * @index: the index to bit to set to 0.
 *
 * Return: 1 on success, and -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 80)
		return (-1);
	*n = (~(1ul << index) & *n);
	return (1);
}
