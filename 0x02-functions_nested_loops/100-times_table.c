#include "main.h"
/**
 * print_times_table - print time tables
 *
 * @n: the n time
 *
 * Return: none
 */
void print_times_table(int n)
{
	int i, j, x;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				x = i * j;
				_putchar(44);
				_putchar(32);
				if (x <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(48 + x);
				}
				else if (x < 100)
				{
					_putchar(32);
					_putchar(48 + (x / 10));
					_putchar(48 + (x % 10));
				}
				else
				{
					_putchar(((x / 100) % 10) + 48);
					_putchar(((x / 10) % 10) + 48);
					_putchar((x % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
