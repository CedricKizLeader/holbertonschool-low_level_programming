#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: rand
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
	}
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	return (0);

}
