#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - summing the data(n) of all the nodes in the linked list
 * @head: head of the linked list
 * Return: the summed result
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (n);
	if (head->next != NULL)
		n += sum_listint(head->next);
	n += head->n;
	return (n);
}
