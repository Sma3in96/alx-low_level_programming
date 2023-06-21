#include <stdio.h>
/**
 * main - Prints  numbers below 4m
 *
 * Return: Always 0
 */
int main(void)
{
	long int new;
	long int sum = 2;
	long int d1 = 1;
	long int d2 = 2;

	while (new < 4000000)
	{
		new = d1 + d2;
		if (new % 2 == 0)
			sum += new;
		d1 = d2;
		d2 = new;
	}
	printf("%ld\n", sum);
	return (0);
}
