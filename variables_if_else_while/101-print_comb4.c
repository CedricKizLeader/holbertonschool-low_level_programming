#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Sucess)
* Description: 01, 02, etc
*
*/
	int main(void)

	int n1, n2, n3;
	for (n1 = '0' ; n1 <= '9' ; n1++)
	for (n2 = '1' ; n2 <= '9' ; n2++)
	for (n3 = '2' ; n3 <= '9' ; n3++)

	if (n1 != n2)
	if (n2 != n3)
	if (n1 < n2)
	if (n2 < n3)
	{
	putchar (n1);
	putchar (n2);
	putchat (n3);

	if (n1 != '7')
	{
	putchar (',');
	putchar (' ');
	}
	{
	putchar('\n');
	}
	return (0);
	}

