#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s++);
	return (_puts_recursion(*s));
}
