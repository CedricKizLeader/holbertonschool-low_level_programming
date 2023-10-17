#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Last digit
 */

/** betty main tu me les brise */
int main(void)
{
	int n;
	char lastdigitof;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigitof = (n % 10);


	if (lastdigitof > 5)
{
	printf("Lastdigitof %d is %d and is greater than 5\n", n, lastdigitof);
}
	if (lastdigitof == 0)
{
	printf("Lastdigitof %d is %d and is 0\n", n, lastdigitof);
}
	if (lastdigitof < 6 && lastdigitof != 0)
{
	printf(
			"Lastdigitof %d is %d and is less than 6 and not 0\n", n, lastdigitof);
}
return (0);
}
