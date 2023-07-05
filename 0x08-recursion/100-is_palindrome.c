#include "main.h"
/**
 * is_palindrome - check if string is palindrome
 * @s: string
 *
 *
 * Return: int
 */
int length(char *s, int i);
int check(char *s, int index, int l);
int is_palindrome(char *s)
{
	return (check(s, 0, length(s, 0)));
}
int length(char *s, int i)
{
	if (*(s + i) != '\0')
		return (0);
	return (1 + length(s, i + 1));
}
int check(char *s, int index, int l)
{
	if (*(s + index) != *(s + (l - 1 - index)))
		return (0);
	else
		return (1 * check(s, index + 1, l)); 

}	
