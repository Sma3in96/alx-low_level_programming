#include "main.h"
/**
 * print_binary - print base 2 representation
 * @n: int 
 * Return: void
*/
void print_binary(unsigned long int n)
{
    unsigned long int j = 1;

    for (j = 1; j > n; j *= 2)
        ;
    j /= 2;
    while (j != 0)
    {
        if (n % j == 0)
        {
            _putchar('1');
            n = n - j;
        }
        else
            _putchar('0');
        j /= 2;
    }
    _putchar('\n');
}
