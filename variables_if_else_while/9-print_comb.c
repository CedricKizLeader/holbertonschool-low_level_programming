#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all single digit numbers
 * Return: Always 0 (Success)
 */


int main(void)

{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}
