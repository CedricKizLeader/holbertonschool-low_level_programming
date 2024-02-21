#include <stdio.h>

/**
 * main - Imprime l'alphabet en minuscules et en majuscules
 *
 * Description: Ce programme utilise une seule boucle for pour itérer sur
 * chaque lettre de l'alphabet en minuscules. Pour chaque itération, il
 * imprime la lettre en minuscule et la lettre correspondante en majuscule.
 * Après la boucle, il imprime une nouvelle ligne.
 * Return: Retourne 0 si le programme s'exécute correctement.
 */


int main(void)
{
        char c;

        for (c = 'a'; c <= 'z'; c++)
        {
                putchar(c);
        }
	for (c = 'A'; c <= 'Z'; c++)
	{

		putchar(c);
	}
        putchar('\n');
        return (0);
}
