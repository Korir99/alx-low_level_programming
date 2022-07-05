#include "main.h"

/**
* print_alphabet_x10 - entry point
*
* Return: p
*
*/
void print_alphabet_x10(void);
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar((**10), j);
		}
		_putchar('\n');
	}
}
