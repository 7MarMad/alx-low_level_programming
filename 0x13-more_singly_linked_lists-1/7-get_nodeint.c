#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - getting the node at a specific index
 * @head: head of linked list
 * @index: index where the node is
 * Return: pointer of node we found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);
	while (index != 0 && (head->next != NULL))
	{
		head = head->next;
		index--;
	}
	if (index == 0)
		return (head);
	else
		return (NULL);
}
