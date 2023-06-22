#include "main.h"

/**
 * print_numbers - prints numbers with putchar
 *
 * Return: nothing at all
 */

void print_numbers(void)
{
	int index;

	for (index = 0; index < 10; index++)
	{
		_putchar(48 + index);
	}
	_putchar('\n');
}
