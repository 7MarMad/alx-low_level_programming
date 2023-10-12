#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adding a node in the end of linked list
 * @head: head of linked list
 * @n: data type of node to be added
 *
 * Return: address of new node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *walker;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	walker = *head;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (walker->next != NULL)
		walker = walker->next;
	new->prev = walker;
	walker->next = new;

	return (new);
}
