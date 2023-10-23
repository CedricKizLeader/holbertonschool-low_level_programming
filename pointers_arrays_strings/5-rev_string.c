#include "main.h"

/**
 * rev_string - reverse,followed by a ('\n')
 * @s: vomisA caasI
 * return: void
 */

void rev_string(char *s)

{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (lenght -= 1; lenght >= 0; lenght--)
	{
		_putchar(s[lenght]);
	}
	_putchar('\n');
}
