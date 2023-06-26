#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (*(str + i))
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(*(str + j));
		}
	}
	else
	{
		for (j = (i / 2) + 1; j < i; j++)
		{
			_putchar(*(str + j));
		}
	}
	_putchar('\n');
}
