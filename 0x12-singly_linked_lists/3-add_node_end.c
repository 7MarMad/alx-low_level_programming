#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adding a node in a linked list in the end
 *
 * @head: head of the linked list
 * @str: string to be given to the structre
 *
 * Return: pointer to the created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
