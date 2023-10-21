#include "main.h"

/**
 * more_numbers - *10 prints 0/14.
 * Return: 1 if success, else 0.
 */

void more_numbers(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar('0' + i / 10);

			_putchar ('0' + i % 10);
		}
	_putchar('\n');
	}
}
