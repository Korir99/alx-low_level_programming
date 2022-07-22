#include "main.h"

/**
* _islower - show lower case characters
* @c: character to be displayed
*
* Return: 1 for lowercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
