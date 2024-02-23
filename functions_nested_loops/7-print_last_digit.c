#include "main.h"

/**
 * print_last_digit - print thelast digit of n
 *@n: number to be checked
 *
 * Return: n if it's good
 */

int print_last_digit(int n)

{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
