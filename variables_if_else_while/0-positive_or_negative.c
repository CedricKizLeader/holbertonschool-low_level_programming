#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Génère un nombre aléatoire et affiche si
 * le nombre est positif, négatif ou zéro.
 *
 * Description: Utilise la fonction rand pour générer un nombre
 * aléatoire.
 * Le nombre généré est ensuite comparé à zéro pour
 * déterminer s'il est positif,
 * négatif ou zéro. Un message correspondant est affiché à l'utilisateur.
 * Return: Retourne 0 si le programme s'exécute correctement.
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	}
	return (0);
}
