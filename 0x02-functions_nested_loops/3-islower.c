#include "main.h"
/**
 * _islower - checks for lowercaces
 * @c: the code ascii of the letter we want to check
 *
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
