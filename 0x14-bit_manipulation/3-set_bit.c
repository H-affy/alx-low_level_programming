#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at a given index.
 * @n: the number to change pointer.
 * @index: the given index to set the bit to 1.
 *
 * Return: 1 on success, -1 if there is error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 80)
		return (-1);
	*n = ((1ul << index) | *n);
	return (1);
}
