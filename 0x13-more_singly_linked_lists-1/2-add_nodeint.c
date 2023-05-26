#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adding a node to the linked list
 * @head: head of the linked list
 * @n: data type of the structre
 * Return: pointer to newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (new);
}
