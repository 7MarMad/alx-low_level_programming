#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reversing a linked list
 * by making the rear the head and vis-versa
 * @head: current head of linked list
 *
 * Return: address to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *walker, *temp = NULL;

	walker = *head;
	if (walker == NULL)
		return (NULL);
	if (walker != NULL && walker->next == NULL)
		return (*head);
	walker = (*head)->next;
	while (walker != NULL)
	{
		(*head)->next = temp;
		temp = *head;
		*head = walker;
		walker = walker->next;
	}
	(*head)->next = temp;
	return (*head);
}
