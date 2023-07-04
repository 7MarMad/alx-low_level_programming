#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - poping the first node of the linked list
 * @head: current head
 *
 * Return: the value of n in the node
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	val = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (val);
}
