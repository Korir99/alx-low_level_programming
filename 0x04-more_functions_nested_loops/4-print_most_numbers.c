#include "main.h"

/**
*print_most_numbers - prints 0 to 9 otherwise not 2 and 4
*
*/

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	if (x != '2' && x != '4')
	_putchar(x);
	}
	_putchar('\n');
}
