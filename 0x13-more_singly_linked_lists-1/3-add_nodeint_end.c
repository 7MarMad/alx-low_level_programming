#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adding a node to a linked list on the end
 * @head: head of the linked list
 * @n: data for the node added
 * Return: pointer of the new added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
