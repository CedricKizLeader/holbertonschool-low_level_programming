#include <stdio.h>
#include <unistd.h>

/**
 * main - _putchar
 *
 * Description : Write a progrzm that prints _putchar
 * Return: Always 0 (sucess).
 */
int main(void)
{

	const char* text = "_Putchar\n";

	write(1, text, 9);
	return (0);
}
