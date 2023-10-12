#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  getting a certain node using index
 * @head: head of linked list
 * @index: index of node to retrieve
 *
 * Return: address of node searched for
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0 && head != NULL)
	{
		head = head->next;
		index--;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
