#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all data (n) of linked list
 * @head: head of linked list
 *
 * Return: sum of the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
