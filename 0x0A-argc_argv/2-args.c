#include <stdio.h>
/**
 * main - print the args given to the program
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
