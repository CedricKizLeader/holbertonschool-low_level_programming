#include "main.h"

/**
* _isdigit - returns 1 if c is a digit else 0
* @c: 3WEEK STARTED.
* Return: 1 if success, else 0.
*/

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
