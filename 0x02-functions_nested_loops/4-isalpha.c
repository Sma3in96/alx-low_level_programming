#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: the code ascii of the letter we want to check
 *
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
