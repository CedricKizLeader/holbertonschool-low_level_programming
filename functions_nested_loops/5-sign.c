#include "main.h"

/**
 * print_sign - print the sign of the number
 *@n: number to be checked
 *
 * Return: selon conditions
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}