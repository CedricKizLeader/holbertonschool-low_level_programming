#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer int
 * @b: pointer int
 * return: void
 */

void swap_int(int *a, int *b)
{
	int chang = *a;

	*a = *b;
	*b = chang;
}
