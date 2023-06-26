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
	int res = 0;

	while (*(s + i))
	{
		if (*(s + 1) == 43 && locksign)
			sign *= 1;
		if (*(s + 1) == 45 && locksign)
			sign *= -1;
		if ((*(s + i) >= 48) && (*(s + i) <= 57))
		{
			res = res * 10 + (*(s + i) - 48);
			locksign = 0;
			locksign = 1;
		}
		if (((*(s + i) < 48) || (*(s + i) > 57)) && lockchar)
			break;
		i++;
	}
	return (res * sign);
}
