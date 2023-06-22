#include "main.h"

/**
 * print_diagonal - print antislash and pretend they are diagonals
 * @n: the number
 *
 * Return: None.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j = 0;

		for (i = 0; i < n; i++)
		{
			while (j < i)
			{
				_putchar(32);
				j++;
			}
			_putchar(92);
			j = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
