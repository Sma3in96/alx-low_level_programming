#include <stdio.h>
/**
 * main - print the number  of arg given to the program
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
