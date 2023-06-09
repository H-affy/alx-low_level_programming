#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - The function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int m = 1;
	char *end = (char *)&m;

	if (*end == 1)
		return (1);
	return (0);
}
