#include "main.h"
/**
 * _atoi - return int inside of string
 * @s: string
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int locksign = 1;
	int lockchar = 0;
	unsigned int res = 0;

	while (*(s + i))
	{
		if (*(s + i) == 43 && locksign == 1)
		{
			sign *= 1;
		}
		if (*(s + i) == 45 && locksign == 1)
		{
			sign *= -1;
		}
		if ((*(s + i) >= 48) && (*(s + i) <= 57))
		{
			res = res * 10 + (*(s + i) - 48);
			locksign = 0;
			lockchar = 1;
		}
		else
		{
			if (lockchar)
				break;
		}
		i++;
	}
	return (sign * res);
}
