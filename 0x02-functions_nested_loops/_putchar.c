#include <unistd.h>
/**
 * main - Entry point
 * Return: On success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
