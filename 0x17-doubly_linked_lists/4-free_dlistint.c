#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - freeing linked list
 * @head: head of linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *walker;

	while (head != NULL)
	{
		walker = head->next;
		free(head);
		head = walker;
	}
}
