#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adding a new node to the linked list
 *
 * @head: current head of the linked list
 * @str: a string to be duplicated in one if the data types in the structre
 *
 * Return: pointer to the new node created
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
