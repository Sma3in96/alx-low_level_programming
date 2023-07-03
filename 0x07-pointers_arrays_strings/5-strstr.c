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
	unsigned int i, j, notfound = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			for (j = 1;  *(needle + j) != '\0'; j++)
			{
				if (*(needle + j) != *(haystack + i + j))
				{
					break;
				}
			}
			if (!(needle + j)
				return (haystack + i);
			j = 1;
		}
	}
	return ('\0');
}
