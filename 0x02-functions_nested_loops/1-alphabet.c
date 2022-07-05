#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 always success
 */
void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
	_putchar('a');
		a++;
	}
	_putchar('\n');
	return (0);
}
