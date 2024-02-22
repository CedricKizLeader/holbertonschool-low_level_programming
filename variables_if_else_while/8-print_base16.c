#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Retourne 0 si le programme s'exécute correctement.
 */


int main(void)
{
	int number;

	for (number = 0; number < 16; number++)
		if (number < 10)
		{
			putchar(number + '0');
		}
		else
		{
			putchar(number - 10 + 'a');
		}
	putchar('\n');
	return (0);
}
