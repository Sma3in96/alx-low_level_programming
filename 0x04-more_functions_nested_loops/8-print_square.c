#include "main.h"

/**
 * print_square - print obv squares
 * @size: the size of the square
 *
 * Return: None.
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j = 0;

		for (i = 0; i < size; i++)
		{
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			j = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
