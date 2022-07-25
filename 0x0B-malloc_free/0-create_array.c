#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array and initializes it
* @size: bytes
* @c: character
* Return: pointer
*/
char *create_array(unsigned int size, char c);
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(char) * size);
	if (t == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
