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

	for (i = 0; *(hayslack + i) != '\0'; i++)
	{
		if (*(hayslack + i) == *needle)
		{
			for (j = 1;  *(needle + j) != '\0'; j++)
			{
				if (*(needle + j) != *(hayslack + i + j))
				{
					notfound = 1;
					break;
				}
			}
			if (not found == 0)
				return (hayslack + i);
		}
	}
	return ('\0');
}
