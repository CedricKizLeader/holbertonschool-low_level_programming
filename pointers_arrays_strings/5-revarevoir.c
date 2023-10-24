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
	lenght--;
	for (lenght >= 0)
	{
		_putchar(s[lenght]);
		lenght--;
	}
	_putchar('\n');
}
