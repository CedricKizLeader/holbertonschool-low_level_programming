#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Alphabet
 */

/** betty main Patience */

int main(void)

	int i = 0;
{
	putchar('0');

	while (i < 9)
	{
		putchar(',');
		putchar(' ');
	}
	{
		putchar(i + '0');
		putchar('\n');
	}
	return (0);
}
