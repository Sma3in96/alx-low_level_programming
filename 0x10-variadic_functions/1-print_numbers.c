#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers
 * @separator: str
 * @n: int
 * @...: other args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, flag = 0;
	va_list ar;

	va_start(ar, n);
	if (separator)
		flag = 1;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ar, int));
		if (i != n - 1 && flag)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
