#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - freeing the allocated memory of a linked list
 * with having head being NULL
 * @head: head of linked list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *walker;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		walker = (*head)->next;
		free(*head);
		*head = walker;
	}
	*head = NULL;
}
