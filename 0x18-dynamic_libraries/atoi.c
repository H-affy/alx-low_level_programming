#include "main.h"

/**
 * _atoi - Function that converts string to integer
 * @s: The string to convert.
 *
 * Return: the integer cinverted from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int d = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] = '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
