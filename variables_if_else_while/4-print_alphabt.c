#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Alphabet no q-e
 */

/** betty main Alphabet  no q-e */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
	{
		putchar('\n');
		}
	return (0);
}
