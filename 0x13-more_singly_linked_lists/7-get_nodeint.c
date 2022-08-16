#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function
 * @head: first node
 * @index: index of the node
 * Return: the nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int count = 0;

	while (count < index)
	{
		if (p != NULL)
			p = p->next;
		else
			return (NULL);
		count++;
	}

	if (p != NULL)
		return (p);
	else
		return (NULL);
}
