#include <unistd.h>
/**
 * main -  starting point
 *
 * return: Always 1 (success)
 */
int main(void)
{
	char jo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, jo, 59);
	return (1);
}
