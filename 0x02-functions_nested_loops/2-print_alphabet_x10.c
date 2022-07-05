#include "main.h"

/**
* main - entry point
*
* Return: prints 10 times the alphabet
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
