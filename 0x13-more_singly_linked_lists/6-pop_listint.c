#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first node
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *d;

	if (*head == NULL)
		return (0);

	d = *head;
	i = d->n;
	*head = d->next;
	free(d);

	return (i);
}
