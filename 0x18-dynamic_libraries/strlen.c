#include "main.h"

/**
 * _strlen - Function that returnthe len of a string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
