#include "cal.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of args
 * @argv: array of args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int (*p);

	if (argc != 4)
	{	
		printf("Error\n");
		exit(99);
	}
	else
	{
		p = get_op_func(argv[2]);
		if (p == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d", p(atoi(argv[1]), atoi(argv[3])))
	}
	return (0);
}
