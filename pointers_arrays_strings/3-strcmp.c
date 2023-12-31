#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
