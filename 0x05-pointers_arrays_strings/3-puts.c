#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
