#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - in serting a node in a specific index
 * @head: head of linked list
 * @idx: index where to insert the new node
 * @n: data of the new node added
 *
 * Return: address to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *walker, *new, *walker2;

	walker = *head;
	while ((i != idx) && walker != NULL)
	{
		walker2 = walker;
		walker = walker->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL || idx == 0)
		*head = new;
	else
		walker2->next = new;
	new->next = walker;
	return (new);
}
