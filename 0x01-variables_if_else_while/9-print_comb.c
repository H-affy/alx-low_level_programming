#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 45; n < 58; n++)

		putchar(n);
	if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
}
