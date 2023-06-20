#include "main.h"
/**
 * times_table - prints times table
 *
 * Return: None
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			if ((i * j) < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(48 + (i * j));
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(48 + (((i * j) - ((i * j) % 10)) / 10));
				_putchar(48 + ((i * j) % 10));
			}
		}
		_putchar('\n');
	}
}
