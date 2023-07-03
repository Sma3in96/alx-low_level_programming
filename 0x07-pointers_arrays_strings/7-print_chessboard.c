#include "main.h"
/**
 * print_chessboard - print a chess
 * @a: pointer
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, line = 0;

	for (i = 0; i < 64; i++)
	{
		if (i != 0 && i % 8 == 0)
		{
			line = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - line]);
	}
	_putchar('\n');
}
