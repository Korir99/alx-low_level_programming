#include "main.h"
#include <string.h>

/**
* _strncat - concatenates two strings
* @dest: Pointer
* @src: Pointer
* @n: Variable with number of bytes
* Return: Characters
**/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
