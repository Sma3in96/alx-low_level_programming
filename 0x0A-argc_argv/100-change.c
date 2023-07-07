#include <stdio.h>
#include <stdlib.h>
/**
 * main - print given to the program
 * @argc: number of arg
 * @argv: array of arg
 * Return: 1 for error
 */
int main(int argc, char *argv[])
{
	int coin = 0, arg;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		arg = atoi(argv[1]);
		while (arg > 0)
		{
			if (arg >= 25)
				arg -= 25;
			else if (arg >= 10)
				arg -= 10;
			else if (arg >= 5)
				arg -= 5;
			else if (arg >= 2)
				arg -= 2;
			else if (arg >= 1)
				arg -= 1;
			coin++;
		}
		printf("%d\n", coin);
	}
	return (0);
}
