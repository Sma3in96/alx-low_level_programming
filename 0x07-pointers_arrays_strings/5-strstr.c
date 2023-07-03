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
	unsigned int i, j = 1;

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
			if (!*(needle + j))
				return (haystack + i);
			j = 1;
		}
		i++;
	}
	if (*(haystack) == '\0' && *(needle) == '\0')
		return ('\0');
	return ('\0');
}
