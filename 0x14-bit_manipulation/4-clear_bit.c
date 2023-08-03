#include "main.h"
/**
 * clear_bit - set to 0
 * @n: int
 * @index: index
 * Return: new value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;

	if (index > 63)
		return (-1);
	temp = ~(1 << index);
	*n = (*n & temp);
	return (1);
}
