#include <stdlib.h>
#include "lists.h"

/**
 * delete_h - delte head in case of index = 0
 * @head: head of linked list
 *
 * Return: 1 for success, -1 ofr failure
 */
int delete_h(dlistint_t **head)
{
	dlistint_t *walker;

	walker = *head;
	if (*head == NULL)
		return (-1);

	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	else
	{
		walker->next->prev = NULL;
		*head = walker->next;
		free(walker);
		return (1);
	}
}

/**
 * delete_dnodeint_at_index - deleting a node at a specific index from list
 * @head: head of linked list
 * @index: index whare the node that need to be deleted
 *
 * Return: 1 for success, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *walker;

	walker = *head;
	if (index == 0)
		return (delete_h(&(*head)));

	while (index > 0 && walker != NULL)
	{
		walker = walker->next;
		index--;
	}
	if (walker == NULL)
		return (-1);

	walker->prev->next = walker->next;
	if (walker->next != NULL)
		walker->next->prev = walker->prev;
	free(walker);
	return (1);
}
