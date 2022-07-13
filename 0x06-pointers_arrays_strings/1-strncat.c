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
	int i, j:

	for (i = 0; dest[i] != 0; i++)

	j = 0;
	while (src[j] != '\0')
	{
		if (j < n)
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
