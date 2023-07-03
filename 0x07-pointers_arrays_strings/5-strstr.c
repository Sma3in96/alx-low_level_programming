#include "main.h"
/**
 * _strstr -  finds the first occurrence of the substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 1;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{
			while (*(needle + j) != '\0')
			{
				if (*(needle + j) != *(haystack + i + j))
				{
					break;
				}
				j++;
			}
			if (*(needle + j) == '\0')
			{
				return (haystack + i);
			}
			j = 1;
		}
		i++;
	}
	return ('\0');
}
