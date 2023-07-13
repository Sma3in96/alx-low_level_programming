#include "main.h"
/**
 * malloc_checked - allocate a memory space
 * @b: size to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b);
	if (p == NULL)
		return (98);
	return p;
}
