#include "main.h"
/**
 * _sqrt_recursion - return sqrt
 * @n: int
 * @p: int
 *
 * Return: int
 */
int look(int n, int mul);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (look(n, 1));
}
/**
 * look - looking for mul
 * @n: int
 * @p: int
 *
 * Return: mul
 */
int look(int n, int mul)
{
	if (mul * mul == n)
		return (mul);
	if (mul < n)
		return (look(n, mul + 1));
	return (-1);
}
