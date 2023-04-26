#include <stdio.h>

/**
 * main - Prints the sum of all multiplies of 3 0r 5 up to 1024
 * Return: Always (Success)
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (1 % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
