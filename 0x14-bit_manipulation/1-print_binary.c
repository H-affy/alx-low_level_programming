#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print.
 */
void print_binary(unsigned long int n)
{
	int x, y = 0;
	unsigned long int l;

	for (x = 63; x >= 0; x--)
	{
		l = n >> x;

		if (l & 1)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
	}
	if (!y)
		_putchar('0');
}
