#include "main.h"
#include <string.h>

/**
* _strncpy - copies two strings
* @dest: first parameter
* @src: char pointe
* @n: intyeger
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
