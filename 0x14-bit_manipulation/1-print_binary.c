#include "main.h"
/**
 * print_binary - print base 2 representation
 * @n: int
 * Return: void
*/
void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
		}
	else
		_putchar('0');
}
