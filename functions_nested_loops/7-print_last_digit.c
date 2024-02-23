#include "main.h"

/**
 * print_last_digit - last digit
 *@n: Last digit
 * Return: n.
 */

int print_last_digit(int n)
{
	while (n >= 10)
	{
		int sum = 0;

		while (n > 0)
		{
			sum += n % 10;
			n /= 10;
		}
		n = sum;
	}
	return (n);
}
