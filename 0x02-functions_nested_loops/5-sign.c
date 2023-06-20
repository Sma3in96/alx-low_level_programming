#include "main.h"
/**
 * print_sign - check the sign of a given number
 * @n: integer we want to check
 *
 * Return: 1 if true -1 if false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return (0);
	}
}
