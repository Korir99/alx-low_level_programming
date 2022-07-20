#include "main.h"

/**
* _puts_recursion - Prints the strings
*@s: string to be printed
*Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0' || *s == '0')
	{
	_putchar ('\n');
	return;
	}
	_putchar (*s);
	++s;
	_puts_recursion(s);
}
