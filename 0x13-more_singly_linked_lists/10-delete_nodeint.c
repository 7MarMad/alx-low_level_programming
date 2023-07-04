#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deleting a node at an specific index
 * @head: head of linked list
 * @index: index of node to delete
 *
 * Return: 1 for success, -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *walker, *temp;

	if (*head == NULL)
		return (-1);
	walker = *head;
	if (index == 0)
	{
		if (walker->next != NULL)
			*head = walker->next;
		else
			*head = NULL;
		free(walker);
		return (1);
	}
	while ((i + 1) != index && walker != NULL)
	{
		walker = walker->next;
		i++;
	}
	if ((i + 1) != index || walker == NULL)
		return (-1);
	if (walker != NULL && walker->next == NULL)
		return (-1);
	temp = walker->next;
	walker->next = temp->next;
	free(temp);
	return (1);
}
