#include <stdio.h>
/**
 * main - Prints  numbers below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int ao, sum;

	for (ao = 1; ao < 1024; ao++)
	{
		if ((ao % 5) == 0 || (ao % 3) == 0)
			sum += ao;
	}
	printf("%d\n", sum);
	return (0);
}
