#include "main.h"
/**
 * print_rev - print a string to stdout in reverse
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*(s + i))
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
