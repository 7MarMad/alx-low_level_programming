#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - popping a the first node of the linked list
 * @head: head of the linked list
 * Return: returning the date(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
