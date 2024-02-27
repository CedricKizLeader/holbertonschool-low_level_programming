#include "main.h"


/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Description: This function uses a loop to
 * iterate over the numbers from 0 to 9
 * and prints them using the _putchar function.
 * It also prints a new line at the end.
 */

void print_numbers(void)

{
	int fatigue = 0;

	for (fatigue = 0; fatigue < 10; fatigue++)
	{
		_putchar(fatigue + '0');
	}
	_putchar('\n');
}
