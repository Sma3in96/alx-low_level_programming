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
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (*(argv[i] + j) != '\0')
			{
				if (*(argv[i] + j) < '0' || *(argv[i] + j) > '9')
				{
					printf("Error\n");
					return (1);
				}
			j++;
			}
			sum += atoi((argv[i]));
		}
		printf("%d\n", sum);
	}
	return (0);
}
