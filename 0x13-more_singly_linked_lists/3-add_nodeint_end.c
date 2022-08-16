#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint_end - adds a node at the end of the list
* @head: first member
* @n: second member
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
