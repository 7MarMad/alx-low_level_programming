#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - freeing the memory allocated for the linked list
 * @head: head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	if (temp->next != NULL)
		free_listint(temp->next);
	free(head);
}
