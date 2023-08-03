#include "main.h"
/**
 * get_bit - get at index
 * @n: int
 * @index: index
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
