#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adding a node to the begining if the linked list
 * @head: current head if linked list
 * @str: string to be duplicated in the node made
 *
 * Return: pointer to the new head (the new added node)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (str != NULL)
		new->len = strlen(new->str);
	else
		new->len = 0;
	new->next = *head;
	*head = new;
	return (*head);
}
