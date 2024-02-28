#include "main.h"

/**
* print_line - Write a function that draws a straight line.
* @n: __
* @straight_line: __
*/

void print_line(int n)
{
        int straight_line;

        for (straight_line = 0; straight_line < n; straight_line++)
        {
                _putchar('_');
        }
        _putchar('\n');
}
