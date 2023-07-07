#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - The function that sets the value of a bit to 0 at a given index.
 * @index: the index, starting from 0 of the bit you want to set.
 * @n: The pointer that point to the bit.
 *
 * Return: 1 on success, -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
