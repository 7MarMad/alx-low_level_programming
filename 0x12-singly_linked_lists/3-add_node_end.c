#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adding a node at the end of the linked list
 * @head: head of the current linked list
 * @str: string to be duplicated for the node added
 *
 * Return: the address of the new element added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *walker;

	new = malloc(sizeof(list_t));
	if (new == NULL || str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = NULL;
	walker = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (walker->next != NULL)
			walker = walker->next;
		walker->next = new;
	}
	return (new);
}
