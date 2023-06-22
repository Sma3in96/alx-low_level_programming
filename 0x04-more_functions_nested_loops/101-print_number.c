#include  "main.h"
/**
 * print_number -  print numbers.
 * @n: the integer.
 *
 * Return: none.
 */
void print_number(int n)
{
	unsigned int i, j, exp;

	j = i;
	exp = 1;
	if (n < 0)
	{
		i = -1 * n;
		_putchar(45);
	}
	else
	{
		i = n;
	}
	while (j > 9)
	{
		exp = exp * 10;
		j = j / 10;
	}
	for (; exp >= 1; exp /= 10)
	{
		_putchar(48 + ((i / exp) % 10));
	}
}
