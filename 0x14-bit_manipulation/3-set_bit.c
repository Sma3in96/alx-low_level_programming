#include "main.h"
/**
 * set_bit - set a bit
 * @n: int
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp = 0;

	if (index > 63)
		return (-1);
	temp = 1 << index;
	*n = (*n | temp);
	return (1);
}
