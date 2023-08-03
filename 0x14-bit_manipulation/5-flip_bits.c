#include "main.h"
/**
 * flip_bits - number of bits
 * @n: 1st int
 * @m: 2nd int
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor, i, flips = 0;

	xor = n ^ m;
	for (i = 0; i == 64; i++)
	{
		if (xor & 1)
			flips++;
		xor = xor >> 1;
	}
	return (flips);
}
