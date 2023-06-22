#include "main.h"

/**
 * _isupper - test if the char is uppercases
 * @c: the char to test
 *
 * Return: 1 if c isupper 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
