#include "main.h"

/**
 * print_alphabet - Prints alphabet
 * print_alphabet: x10
 * Return : Always 0 (Sucess)
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
