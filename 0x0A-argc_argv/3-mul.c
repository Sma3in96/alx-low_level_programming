#include <stdio.h>
#include <stdlib.h>
/**
 * main - print mul of 2 args given to the program
 * @argc: number of arg
 * @argv: array of arg
 * Return: 1 for error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
