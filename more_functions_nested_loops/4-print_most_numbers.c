#include "main.h"


/**
 * print_most_numbers - Prints the numbers from 0 to 9
 *
 * Description: This function uses a loop to
 * iterate over the numbers from 0 to 9
 * and prints them using the _putchar function.
 * but no print 2 and 4
 * It also prints a new line at the end.
 */

void print_most_numbers(void)

{
        int fatigue = 0;

        for (fatigue = 0; fatigue < 10; fatigue++)
		if (fatigue != 2 && fatigue != 4)
        {
                _putchar(fatigue + '0');
        }
        _putchar('\n');
}
