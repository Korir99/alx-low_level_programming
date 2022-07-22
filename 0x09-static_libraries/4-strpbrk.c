#include "main.h"
#include <string.h>

/**
 * _strpbrk -  length of a prefix substring
 * @s: first string
 * @accept: second string
 * Return: number of bytes in the initial segment
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int i;
	int k;

	i = 0;
	while (s[i] != '\0')
	{
	a = 0;
	for (k = 0; accept[k] != '\0'; k++)
	{
		if (s[i] == accept[k])
		a = 1;
	}
	k = 0;
	if (a == 1)
		return (s + i);
	i++;
	}
	return (NULL);
}
