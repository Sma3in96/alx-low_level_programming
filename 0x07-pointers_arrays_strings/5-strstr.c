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

	for (i = 0; *(haystack + i) != '\0'; i++)
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
	}
	if (*(haystack) == '\0' && *(needle) == '\0')
		return (haystack);
	return ('\0');
}
