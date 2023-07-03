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
	int i, j, notfound;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			for (j = 1;  *(needle + j) != '\0'; j++)
			{
				if (*(needle + j) != *(haystack + i + j))
				{
					notfound = 1;
					break;
				}
			}
			if (notfound == 0)
				return (haystack + i);
		}
	}
	return ('\0');
}
