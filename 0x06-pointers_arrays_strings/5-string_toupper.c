#include "main.h"
#include <string.h>

/**
* string_toupper - changes all lowercase letters to upercase
* @p: a paramater
* Return: character variable
*/
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
	if (p[i] >= 97 && p[i] <= 122)
	{
		p[i] = p[i] - 32;
	}
		i++;
	}
	return (p);
}
