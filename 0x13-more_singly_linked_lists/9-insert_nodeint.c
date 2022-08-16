#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	current = *head;
	for (count = 1; current && count < idx; count++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		*head = new;
		new->next = current;
	}
	else if (current->next)
	{
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = NULL;
		current->next = new;
	}
	return (new);
}
