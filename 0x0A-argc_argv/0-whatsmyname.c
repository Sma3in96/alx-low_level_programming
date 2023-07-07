#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
