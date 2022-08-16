#include "lists.h"
#include <stdio.h>
/**
* listint_len - linked lists
*@h: lists
*Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	h = h->next;
	i++;
	}
	return (i);
}
