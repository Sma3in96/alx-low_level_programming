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
		int b = a + 1;

		while (b < 58)
		{
			int c = b + 1;

			while (c < 58)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if ((a != 55) || (b != 56) || (c != 57))
				{
					putchar(44);
					putchar(32);
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
