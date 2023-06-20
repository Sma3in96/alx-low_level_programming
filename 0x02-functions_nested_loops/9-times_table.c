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
			if ((i * j) < 10)	
			{
				_putchar(48 + (i * j));
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			else
			{
				_putchar(48 + (((i * j) % 100) - ((i * j) % 10)));
				_putchar(48 + ((i * j) % 10));
				_putchar(44);
				_putchar(32);

			}
		}
		_putchar('\n');
	}
}
