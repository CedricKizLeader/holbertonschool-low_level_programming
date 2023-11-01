#include "main.h"

/**
 * factorial - Calculate the factorial of an integer.
 * @n: The integer for which to calculate the factorial.
 *
 * Return: The factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
