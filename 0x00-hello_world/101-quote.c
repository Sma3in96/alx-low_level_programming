#include <stdio.h>
/**
 * main -  starting point
 *
 * return: Always 1 (success)
 */
int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, sentence, 59);
	return (1);
}
