#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a++);
	}
	return (0);
}
