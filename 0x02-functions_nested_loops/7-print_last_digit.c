#include "main.h"
/**
 * print_last_digit - return and print last digit of a given number
 * @n: interge
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(48 - (n % 10));
		return (-(n % 10));
	}
	else
	{
		_putchar(48 + (n % 10));
		return (n % 10);
	}
}
