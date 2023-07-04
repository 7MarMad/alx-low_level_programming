#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - sum of data(n) of each node
 * @head: head of linked list
 *
 * Return: sum of the data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
