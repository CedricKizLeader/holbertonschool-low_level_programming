#include "main.h"
#include <stdio.h>

/**
 * main - The “Fizz-Buzz" League of legend power !!
 *
 * Return: 0
 */

int main(void)

{
	int c;

	for (c = 1 ; c <= 100 ; c++)
	{
		if (c % 5 == 0 && c % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (c % 5 == 0 && c < 98)
		{
			printf("Buzz ");
		}
		else if (c % 5 == 0 && c > 98)
		{
			printf("Buzz");
		}
		else if (c % 5 != 0 && c % 3 != 0)
			printf("%d ", c);

	}
	putchar('\n');
	return (0);
}
