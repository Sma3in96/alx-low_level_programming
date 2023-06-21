#include <stdio.h>
/**
 * main - Prints fibo
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, flag1 = 1, flag2 = 1;
	long int sum, d11, d22, sum2;
	long int d1 = 1;
	long int d2 = 2;

	printf("%ld, %ld", d1, d2);
	for (i = 0; i < 96; i++)
	{
		if (flag1)
		{
			sum = d1 + d2;
			printf(", %ld", sum);
			d1 = d2;
			d2 = sum;
		}
		else
		{
			if (flag2)
			{
				d11 = d1 % 1000000000;
				d22 = d2 % 1000000000;
				d1 = d1 / 1000000000;
				d2 = d2 / 1000000000;
				flag2 = 0;
			}
			sum2 = (d11 + d22);
			sum = d1 + d2 + (sum2 / 1000000000);
			printf(", %ld", sum);
			printf("%ld", sum2 % 1000000000);
			d1 = d2;
			d11 = d22;
			d2 = sum;
			d22 = (sum2 % 1000000000);
		}
		if (((d1 + d2) < 0) && flag1 == 1)
			flag1 = 0;
	}
	printf("\n");
	return (0);
}
