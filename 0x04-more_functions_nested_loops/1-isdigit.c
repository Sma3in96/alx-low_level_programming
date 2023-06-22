#include "main.h"

/**
 * _isdigit - test if the char is a digit
 * @c: the char to test
 *
 * Return: 1 if c isdigit 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
