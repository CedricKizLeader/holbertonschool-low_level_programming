#include "main.h"

/**
 * _atoi - converts a string to integer.
 * @s: the string
 * Return: the converted string.
 */

int _atoi(char *s)
{
	int a = 1;
	unsigned int b = 0;

	do {
		if (*s == '-')
			a *= -1;

		else if (*s >= '0' && *s <= '9')
			b = (b * 10) + (*s - '0');

		else if (b > 0)
			break;
	} while (*s++);
	return (b * a);
}
