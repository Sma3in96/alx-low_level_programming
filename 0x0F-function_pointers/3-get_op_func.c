#include "cal.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - select op func
 * @s: op
 * Return: pointer to right function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL && ops[i].op != NULL)
	{
		if (*s == ops[i].op)
			return (&ops[i].f);
		i++;
	}
	return (NULL);
}
