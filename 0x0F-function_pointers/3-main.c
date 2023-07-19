#include "3-calc.h"
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
	int (*p)(int, int);
	
	if (argc != 4)
	{	
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
