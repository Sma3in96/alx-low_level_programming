#include "main.h"
/**
 * get_endianness - get
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i;
	char *d;

	i = 1;
	d = (char *) &i;
	return ((int)*d);
}
