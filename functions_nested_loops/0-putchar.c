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
	char *text = "_Putchar\n";

	while (*text)
	{
		write(1, text, 1);
		text++;
	}

	return 0;
}
