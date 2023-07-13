#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		exit(98);
	}
	argv = argv + 1;
	return (0);
}
