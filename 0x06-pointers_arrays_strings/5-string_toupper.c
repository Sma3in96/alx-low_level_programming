#include "main.h"
/**
 * string_toupper - upper a str
 * @str: string
 *
 * Return: str after upper
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
