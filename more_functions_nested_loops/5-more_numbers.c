#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: nothing
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
