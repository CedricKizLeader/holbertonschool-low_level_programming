#include "main.h"

/**
 * rev_string -  Prints a string in reverse
 * @s: The string to print
 * return: void
 */

void rev_string(char *s)
{
	char *ff = s;
	char a;

	while (*ff)
	{
		++ff;
	}
	--ff;
	while (s < ff)
	{
		a = *s;
		*s = *ff;
		*ff = a;
		++s;
		--ff;
	}
}
