#include <stdio.h>
/**
 * main - Entry point
 * Return: Always  0
 */
int main(void)
{
	int i = '0';
	int l = '0';
	int m = '0';

	while (i <= '7')
	{
		while (l <= '8')
		{
			while (m <= '9')
			{
				if (i < l && l < m)
				{
					putchar(i);
					putchar(l);
					putchar(m);
					if (!(i == '7' && l == '8' && m == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				m++;
			}
			m = '0';
			l++;
		}
		l = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
