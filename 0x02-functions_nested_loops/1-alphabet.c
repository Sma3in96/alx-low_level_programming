#include "main.h"
/**
 * print_alphabet - this function print alpha lowercases
 *
 * Return: this function return void
 */
void print_alphabet(void)
{
	int index;

	for (index = 97; index < 123; index++)
	{
		_putchar(index);
	}
	_putchar('\n');
}
