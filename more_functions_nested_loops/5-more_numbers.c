#include "main.h"

/**
 * void more_numbers - Fonction to print *10 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)

{
	int i = 0, c;

	while (i < 10)
	{


		for (c = 0 ; c <= 14 ; c++)
		{
			_putchar(c + '0');
		}
		_putchar('\n');
		i++;
	}
}
