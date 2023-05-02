#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - reversing the order of the linked list by having the head
 * becoming the rear and the rear becoming the head
 *
 * @head: head of linked list
 *
 * Return: pointer of the new head who was the rear
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *walker, *temp = NULL;

	walker = *head;
	if (walker == NULL)
		return (NULL);
	if (walker->next == NULL)
		return (*head);
	if (walker->next != NULL && walker->next->next == NULL)
	{
		walker->next->next = walker;
		*head = walker->next;
		walker->next = NULL;
		return (*head);
	}
	while (walker->next != NULL)
	{
		walker = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = walker;

	}
	(*head)->next = temp;
	return (*head);
}
