#include "main.h"

/**
 * _isupper - Vérifie si un caractère est une lettreajuscule
 * @c: Le caractère à vérifier
 *
 * Return: Renvoie 1 si le caractère est une lettre majuscule, 0 sinon
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
