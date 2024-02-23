#include "main.h"

/**
 * _isalpha - Vérifie si un caractère est une lettre minuscule
 * ou majucules
 * @c: Le caractère à vérifier
 *
 * Return: Renvoie 1 si le caractère est une lettre minuscule ou maj
 * 0 sinon
 */

int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
