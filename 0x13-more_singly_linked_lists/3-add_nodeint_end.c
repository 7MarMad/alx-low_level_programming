#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adding a node at the end of linked list
 * @head: head of linked list
 * @n: value of an elem in the node added
 *
 * Return: address of node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *walker;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	walker = *head;
	if (walker == NULL)
	{
		*head = new;
		return (new);
	}
	while (walker->next != NULL)
		walker = walker->next;
	walker->next = new;
	return (new);
}
