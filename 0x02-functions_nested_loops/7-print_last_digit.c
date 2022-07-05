#include "main.h"

/**
* print_last_digit - prints the last digit
* @n: character
*
* Return: Always 0
*/
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-1 + '0');
		return (-1);
	}
	else
	{
		_putchar(1 + '0');
		return (1);
	}
}
