#include <stdlib.h>
#include "lists.h"

/**
 * idx_zero - a sub function for index zero
 * @head: head of linked list
 * Return: 1 for success, -1 for fail
 */
int idx_zero(listint_t **head)
{
	listint_t *walker;

	walker = *head;
	if (walker->next != NULL)
	{
		walker = walker->next;
		free(*head);
		*head = walker;
		return (1);
	}
	else
	{
		free(*head);
		*head = NULL;
		return (1);
	}
}
/**
 * delete_nodeint_at_index - deleting a node from the linked list at a
 * specific index
 * @head: head of the linked list
 * @index: index of the node that need to be deleted
 * Return: 1 for success, -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *walker, *temp;

	if (*head == NULL)
		return (-1);
	walker = *head;
	if (index == 0)
		return (idx_zero(&(*head)));
	while (index != 1 && (walker->next != NULL))
	{
		walker = walker->next;
		index--;
	}
	if (index != 1 || walker->next == NULL)
		return (-1);
	if (walker->next != NULL && walker->next->next == NULL)
	{
		free(walker->next);
		walker->next = NULL;
		return (1);
	}
	else
	{
		temp = walker->next;
		walker->next = walker->next->next;
		free(temp);
		return (1);
	}
	return (-1);
}
