#include "main.h"

/**
 * print_line - print a straight line
 * @n: size ( evil )
 *
 * Return: none
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
