#include "main.h"
/**
 * _memset - fills the fist n bytes
 * @s: area
 * @b: constant 
 * @n: number of bytes
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}	
	return (s);
}
