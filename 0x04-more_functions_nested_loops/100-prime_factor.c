#include <stdio.h>
/**
 * main - find and print the largest number
 *
 * Return: always 0
 */
int main(void)
{
	long int n = 612852475143;
	int i = 2;
	int P;

	while (i < n)
	{
		if (n % i == 0)
		{
			n = n / i;
			P = i;
			continue;
		}
		i++;
	}
	printf("%d\n", P);
	return (0);
}
