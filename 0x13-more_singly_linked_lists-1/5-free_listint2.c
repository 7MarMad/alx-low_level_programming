#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - freeing the allocated memory and setting the head to null
 * @head: head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	if (temp->next != NULL)
		free_listint2(&(temp->next));
	free(*head);
	*head = NULL;
}
