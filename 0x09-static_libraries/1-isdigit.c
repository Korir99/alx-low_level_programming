#include "main.h"

/**
* _isdigit - checks if parameter is an uppercase character.
*
* @c: input a number
*
* Return: 1 if c is a digit, 0 in any other case.
*/
int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
