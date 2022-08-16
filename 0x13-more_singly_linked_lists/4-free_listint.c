#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees listint_t
 * @head: first node
 */
void free_listint(listint_t *head)
{
	listint_t *c;

	while (head != NULL)
	{
		c = head;
		head = head->next;
		free(c);
	}
}
