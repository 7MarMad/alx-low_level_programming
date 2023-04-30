#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a node in a specific index in a linked
 * list
 * @head: head of linked list
 * @idx: index of where to add the new node
 * @n: the dat(n) of the node added
 * Return: pointer to the address of the new node added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;

	temp = *head;
	if (*head == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	while (idx > 1 && (temp->next != NULL))
	{
		temp = temp->next;
		idx--;
	}
	if (idx != 1)
	{
		free(new);
		return (NULL);
	}
	if (temp != NULL)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = NULL;
		*head = new;
	}
	return (new);
}
