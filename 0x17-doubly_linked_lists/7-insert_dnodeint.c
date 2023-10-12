#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - adding a node at specific index in a linked list
 * @h: head of linked list
 * @idx: index whare to insert the new node
 * @n: data(n) of new node
 *
 * Return: address of new node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *walker, *new;

	if (*h == NULL && idx > 0)
		return (NULL);
	walker = *h;

	while (idx > 0 && walker->next != NULL)
	{
		walker = walker->next;
		idx--;
	}
	if (idx > 1)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx < 2)
	{
		if (idx == 1)
		{
			if (walker->next != NULL)
				(walker->next)->prev = new;
			new->next = walker->next;
			new->prev = walker;
			walker->next = new;
		}
		else
		{
			new->prev = walker->prev;
			if (walker->prev != NULL)
				(walker->prev)->next = new;
			else
				*h = new;
			new->next = walker;
			walker->prev = new;
		}
	}

	return (new);
}
