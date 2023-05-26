#include <stdlib.h>
#include "lists.h"

/**
 * free_list - freeing all the memory allocated while creating the linked list
 *
 * @head: head of the linked list
 */
void free_list(list_t *head)
{

	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
