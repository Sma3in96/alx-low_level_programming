#include <stdio.h>
/**
 * main - entery point
 *
 *Return: always (0)
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		int b =  48;

		while (b < 58)
		{
			int c = a;

			while (c < 58)
			{
				int d = 48;

				if (a == c)
					d = b+1;
				while (d < 58)
				{
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(c);
						putchar(d);
					if ((a != 57) || (b != 56))
					{
						putchar(44);
						putchar(32);
					}
				d++;
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
