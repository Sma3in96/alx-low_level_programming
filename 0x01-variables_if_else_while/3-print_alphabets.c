#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	a = 65;
	while (a < 91)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
