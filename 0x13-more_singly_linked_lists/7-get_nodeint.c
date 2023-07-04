#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - getting a node at as^pecific index
 * @head: head of linked list
 * @index: index of the node we want to get
 *
 * Return: address of node we got
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if ((i != index) || head == NULL)
		return (NULL);
	return (head);
}
