#include <stdio.h>
/**
 * main - entery point
 *
 *Return: always (0)
 */
int main(void)
{
	int a = 48;

	while ( a < 58 )
	{
		int b =  a;

		while ( b < 58 )
		{
			int c = 48;

			while ( c < 58 )
			{
				int d = 48;

				while ( d < 58)
				{
					if ((a == c) && (b == d))
					{
						d++;
						continue;
					}
					if ((a != 57) || (b != 56))
					{
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(c);
						putchar(d);
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
