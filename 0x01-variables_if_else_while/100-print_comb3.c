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
		int b = a;

		while (b < 58)
		{
			putchar(a);
			putchar(b);
			if ((a != 56) || (b != 57))
			{
				putchar(44);
				putchar(32);
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
