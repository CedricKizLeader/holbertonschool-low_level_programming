#include "main.h"


/*
 * print_square - Imprime un carré de taille donnée
 * avec des caractères '#' sur la sortie standard
 * @size: taille du carré à imprimer
 */

void print_square(int size)
{
	int l, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else

		for (h = 0; h < size; h++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar ('#');
			}
			_putchar('\n');
		}
}
