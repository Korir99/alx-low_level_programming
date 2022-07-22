#include "main.h"
#include <string.h>

/**
* _memset - fills memory with a constant byte.
* @s: pointer
* @b: character
* @n: size
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
