#include "main.h"
/**
 * binary_to_uint - base 2 to base 10
 * @b: number to convert
 * Return: int
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 1, j = 0, sum = 0;
char *p;
unsigned int n;

if (b == NULL)
return (0);
while (b[j])
j++;
p = malloc(j);
for (n = 0; n < j ; n++)
{
p[n] = b[j - 1 - n];
}
for (n = 0; n < j; n++)
{
if (p[n] != '1' && p[n] != '0')
return (0);
if (p[n] == '1')
sum += i;
i *= 2;
}
free(p);
return (sum);
}
