#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * str_len - length of string
 * @str: string to work on
 *
 * Return: length of the string
 */
int str_len(const char *str)
{
	int len = 0;

	if (str == NULL)
		return (-1);
	while (str[0] != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

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
	int lenn;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	lenn = str_len(str);
	if (lenn != -1)
	{
		new->str = strdup(str);
		new->len = lenn;
	}
	else
		new->str = NULL;
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
