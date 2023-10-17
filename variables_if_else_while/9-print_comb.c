#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Alphabet
 */

/** betty main Patience */
int main(void)

{
	putchar(0x30);
	for (int i = 1; i < 10; i++)
	{
		putchar(0x2C);
		putchar(0x20);
		putchar(0x30 + i);
	}
	return (0);
}
