#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Alphabet
 */

/** betty main Alphabet  minu and maj */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	{
		putchar('\n');
	}
	return (0);
}
