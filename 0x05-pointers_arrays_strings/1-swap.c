#include "main.h"
/**
 * swap_int - swap the value of two int
 * @a: int1
 * @b: int2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = b;

	b = a;
	a = c;
}
