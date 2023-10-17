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
	int lastdigitof;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastdigitof = (n % 10);
	if (lastdigitof > 5)
	{
		printf("lastdigitof %d is greater than 5\n", n);
	}
	if (lastdigitof == 0)
	{
		 printf("lastdigitof %d is 0\n", n);
	}
	if (lastdigitof < 6 && lastdigitof != 0)
	{
		printf("lastdigifof is %d is les than 6 and not 0\n", n);
	}

	return (0);
}
