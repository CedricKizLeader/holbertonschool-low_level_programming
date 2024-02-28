#include "main.h"

/**
 * void more_numbers - Fonction to print *10 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int nombre, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			nombre = j;
			if (nombre >= 10)
			{
				_putchar((nombre / 10) + '0');
			}
			_putchar((nombre % 10) + '0');
		}
		_putchar('\n');
	}
}
