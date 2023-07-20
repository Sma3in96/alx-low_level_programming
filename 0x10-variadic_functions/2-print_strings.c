#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print numbers
 * @separator: str
 * @n: int
 * @...: other args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, flag = 0;
	va_list ar;
	char *str;

	va_start(ar, n);
	if (separator)
		flag = 1;
	for (i = 0; i < n; i++)
	{
		str = va_arg(ar, char*);
		if (str == NULL);
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && flag)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
