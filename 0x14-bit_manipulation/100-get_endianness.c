#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, and 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *m = (char *) &x;

	return (*m);
}
