#include <stdio.h>
/**
 * main - Prints  numbers below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum;
	int d1 = 1;
	int d2 = 2;

	printf("%d, %d", d1, d2);
	for (i = 0; i < 50; i++)
	{
		sum = d1 + d2;
		printf(", %d", sum);
		d1 = d2;
		d2 = sum;
	}
	printf('\n');
	return (0);
}
