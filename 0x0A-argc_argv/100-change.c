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
	int coins = 0, arg;

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
			{
				coins = coins + arg / 25;
				arg = arg % 25;
				continue;
			}
			if (arg >= 10)
			{
				coins = coins + arg / 10;
				arg = arg % 10;
				continue;
                        }
			if (arg >= 5)
                        {
                                coins = coins + arg / 5;
				arg = arg % 5;
				continue;
                        }
			if (arg >= 2)
			{
				coins = coins + arg / 2;
				arg = arg % 2;
				continue;
			}
			if (arg >= 1)
                        {
				coins++;
				arg = arg - 1;
				continue;
                        }		
		}
		printf("%d\n", coins);
	}
	return (0);
}
