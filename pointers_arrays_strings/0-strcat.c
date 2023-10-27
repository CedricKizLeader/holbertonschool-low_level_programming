#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string to be appended to
 * @dest: string to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0;

	while (*(dest + i))
		i++;

	while ((*(dest + i) = *(src + a)))
	{
		i++;
		a++;
	}

	return (dest);
}
