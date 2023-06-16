#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(32);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
