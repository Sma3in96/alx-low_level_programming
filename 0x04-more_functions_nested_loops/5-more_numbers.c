#include "main.h"

/**
 * more_numbers - prints numbers with putchar from 0 to 14
 *
 * Return: nothing at all
 */

void more_numbers(void)
{
	int i;
	int j = 0;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{
			if (j == 1)
			{
				_putchar(49);
			}
			_putchar(48 + (i % 10));
			if (i == 9)
				j = 1;
		}
		j = 0;
		_putchar('\n');
	}
}
