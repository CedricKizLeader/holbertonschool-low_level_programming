#include <stdio.h>
#include <unistd.h>

/**
 * imain - _putchar
 * Description : Write a progrzm that prints _putchar
 * Return: Always 0.
 */
int main(void)
{
	{
	char text[] = "_Putchar\n";
	write( 1, text, sizeof(text) - 1);
	}
	return (0);
}
