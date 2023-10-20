#include "main.h"

/**
 * print_alphabet:_x10 - jhftutrut
 * return : o.
 */

void print_alphabet_x10(void);
{
	char letter;
	int i;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		for (int i = 0; i < 10; i++)
		{
			_putchar(letter);
	}
	_putchar('\n');
}
}
