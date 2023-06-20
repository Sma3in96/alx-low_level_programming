#include "main.h"
/**
 * print_alphabet_x10 - this function print alpha lowercases 10 times
 *
 * Return: this function return void
 */
void print_alphabet_x10(void)
{
	int index, i;

	for (i = 0; i < 10; i++)
	{
		for (index = 97; index < 123; index++)
		{
			_putchar(index);
		}
	_putchar('\n');
	}
}
