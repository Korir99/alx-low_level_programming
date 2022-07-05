#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 always success
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
