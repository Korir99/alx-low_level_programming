#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum of all the data
 * @head: first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum;

	if (p == NULL)
		return (0);

	for (sum = 0; p != NULL; p = p->next)
		sum += p->n;

	return (sum);
}
