#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from a int to 98
 * @n: starting point
 *
 * Return: None.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for ( i = n; i < 99; i++)
		{
			printf("%d", i);
		}
		_putchar('\n');
	}
	else
	{
		for ( i = n; i > 97; i--)
		{
			printf("%d", i);
		}
		_putchar('\n');
	}
}
