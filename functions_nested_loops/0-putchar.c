#include <stdio.h>
#include <unistd.h>

/**
 * imain - _putchar
 * Description : Write a progrzm that prints _putchar
 * Return: Always 0.
 */
int main(void)
{
	char text[] = "_Putchar";
	int i = 0;
	int size = sizeof(text) - 1;

	while (i < size);

	{
		putchar(text[i]);
		write(1, &text[i], 1),
		i++;
	}
	return (0);
}
