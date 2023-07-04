#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - freeing all alocated memory for linked list
 * @head: head of linked list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *walker;

	while (head != NULL)
	{
		walker = head->next;
		free(head);
		head = walker;
	}
}
