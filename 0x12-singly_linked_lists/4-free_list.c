#include <stdlib.h>
#include "lists.h"

/**
 * free_list - freeing list of linked list
 * @head: head of linked list to be freed
 *
 */
void free_list(list_t *head)
{
	list_t *walker;

	while (head != NULL)
	{
		walker = head->next;
		free(head->str);
		free(head);
		head = walker;
	}
}
