#include "main.h"

/**
* _isalpha - shows 1 if input is a letter
* @c: character to be printed
*
* Return: 1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
