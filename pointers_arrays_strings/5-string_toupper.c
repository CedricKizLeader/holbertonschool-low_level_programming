#include "main.h"

/**
 * string_toupper - Transform loercases char into uppercases
 * @pls: the string
 * Return: returns the string in uppercase
 */

char *string_toupper(char *pls)
{
	int ff = 0;

	while (pls[ff] != '\0')
	{
		if (pls[ff] >= 'a' && pls[ff] <= 'z')
		{
			pls[ff] -= 32;
		}
		ff++;
	}
	return (pls);
}
