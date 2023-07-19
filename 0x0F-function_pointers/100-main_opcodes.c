#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int i, a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < a; i++)
	{
		printf("%02x", *p & 0xff);
		p++;
		if (i !=  a - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
