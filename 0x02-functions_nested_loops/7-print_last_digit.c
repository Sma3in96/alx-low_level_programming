#include "main.h"
/**
 * print_last_digit - return and print last digit of a given number
 * @n: interge
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	_putchar(48 + (_abs(n) % 10));
	return (_abs(n) % 10);
}
