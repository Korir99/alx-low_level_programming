#include "main.h"

/**
*_isupper - function that checks for uppercase character
*
*@c:  input interger
*Return: Retuns 1 for uppercase and 0 for anything else
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
