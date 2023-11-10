#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings with a limit
 * @s1: First string
 * @s2: Second string
 * @n: Number of char
 * Return: cpy
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *cpy;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;
	if (n <= len2)
		n = len2;
	cpy = malloc(sizeof(char) * (len1 + n + 1));

	for (i = 0; i < len1; i++)
		cpy[i] = s1[i];
	for (i = 0; i < n; i++)
		cpy[len1 + i] = s2[i];
	cpy[len1 + n] = '\0';

	return (cpy);
}
