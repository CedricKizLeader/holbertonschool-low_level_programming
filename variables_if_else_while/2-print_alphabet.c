#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules
 *
 * Description: Ce programme utilise une boucle for pour itérer
 * sur chaque lettre de l'alphabet en minuscules.
 * À chaque itération, la fonction putchar est utilisée pour
 * afficher la lettre actuelle.
 * Après la boucle, putchar('\n') est utilisé pour
 * :wqajouter une nouvelle ligne.
 * Return: Retourne 0 si le programme s'exécute correctement.
 */


int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
