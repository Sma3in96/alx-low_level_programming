#include "main.h"
/**
 * flip_bits - number of bits
 * @n: 1st int
 * @m: 2nd int
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, flips = 0;

	xor = n ^ m;
	while (xor)
	{
		flips += xor & 1;
		xor = xor >> 1;
	}
	return (flips);
}
