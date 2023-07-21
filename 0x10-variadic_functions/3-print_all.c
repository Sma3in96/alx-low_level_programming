#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - print all
 * @format: str
 * @...: arg var
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	char *str;
	unsigned int i = 0, j = 0;
	int flag = 0;
	char id[4] = "fics";

	va_start(ar, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (id[j] != '\0')
		{
			if (flag && id[j] == format[i])
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'i':
				flag = 1, printf("%d", va_arg(ar, int));
				break;
			case 'f':
				flag = 1, printf("%f", va_arg(ar, double));
				break;
			case 'c':
				flag = 1, printf("%c", va_arg(ar, int));
				break;
			case 's':
			{
				flag = 1;
				str = va_arg(ar, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			}
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
