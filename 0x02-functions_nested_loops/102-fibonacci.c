#include <stdio.h>
/**
 * main - Prints  numbers below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int sum;
	long int d1 = 1;
	long int d2 = 2;

	printf("%ld, %ld", d1, d2);
	for (i = 0; i < 48; i++)
	{
		sum = d1 + d2;
		printf(", %ld", sum);
		d1 = d2;
		d2 = sum;
	}
	printf("\n");
	return (0);
}
