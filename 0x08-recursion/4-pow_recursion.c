#include "main.h"
/**
 * _pow_recursion - x raised by power of y
 * @x: int
 * @y: power
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * pow(x ,(y - 1)));
}
