#include "main.h"
/**
 * _print_rev_recursion - print a string in rev
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		i++;
		_print_rev_recursion(*(s + i));
	}
	if (*(s + i) == '\0')
	{
		i--;
	}
	_putchar(*(s + i));
	if (i == 0)
		_putchar('\n');
}
