#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to print between numbers.
 * @n: Number of integers passed to the function.
 * @...: Variable number of integers.
 *
 * Description: This function takes a variable number of integers and prints them
 * with the specified separator. If the separator is NULL, nothing is printed
 * between numbers. A new line is printed at the end.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    for (i = 0; i < n; i++) {
        printf("%d", va_arg(args, int));
        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}
