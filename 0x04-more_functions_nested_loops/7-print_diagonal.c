#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: diagonal line is printed.
* Return: no return.
*/

void print_diagonal(int n)

{
	int x;
	int f;

	for (x = 0; x < n; x++)
	{
		for (f = 0; f < x; f++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (x < (n - 1))
		_putchar('\n');
	}
	_putchar('\n');
}
