#include "main.h"
/**
 * print_triangle - print triangle with #
 * @size: the size of triangle
 *
 * Return: None
 */
void print_triangle(int size)
{
	int i;
	int j = 0;
	int k = 0;
	int n = size;

	if (size > 0)
	{
		for (i = 0; i < n; i++)
		{
			while (j < n - i - 1)
			{
				_putchar(32);
				j++;
			}
			while (k <= i)
			{
				_putchar(35);
				k++;
			}
			_putchar('\n');
			j = 0;
			k = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
