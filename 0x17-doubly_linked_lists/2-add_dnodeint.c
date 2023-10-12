#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adding a node at the head of the linked list
 * @head: head of linked list
 * @n: data type of node added
 *
 * Return: address of new node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
