#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finding where the loop is strted in the linked list
 *
 * @head: head of linked list
 *
 * Return: the address of the node where the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_loop = NULL;

	if (head == NULL)
		return (NULL);
	while (head != NULL && head->next != NULL)
	{
		if (((head->next) - head) > 0)
		{
			node_loop = head->next;
			return (node_loop);
		}
		head = head->next;
	}
	return (node_loop);
}
