#include "main.h"
/**
 * jack_bauer - print hours
 *
 * Return: None.
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(48 + a);
					_putchar(48 + b);
					_putchar(58);
					_putchar(48 + c);
					_putchar(48 + d);
					_putchar('\n');
				}
			}
			if ((a == 2) && (b == 3))
				break;
		}
	}
}
