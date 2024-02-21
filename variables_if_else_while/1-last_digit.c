#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Génère un nombre aléatoire et affiche un message
 * en fonction du dernier chiffre
 *
 * Description: Ce programme utilise la fonction rand pour
 * générer un nombre aléatoire n.
 * Il calcule ensuite le dernier chiffre de n.
 * En fonction de la valeur du dernier chiffre,
 * il affiche un message indiquant si le dernier chiffre
 * est supérieur à 5, égal à 0, ou
 * inférieur à 6 et non nul.
 * Return: Retourne 0 si le programme s'exécute correctement.
 */


int main(void)
{
	int n, Ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ld = n % 10;

	if (Ld > 5)
	{
		printf("Last digit of %d is %d and is greater than5\n", n, Ld);
	}
	else if (Ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Ld);
	}
	else if (Ld < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Ld);
	}
	return (0);
}
