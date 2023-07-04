#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - length of linked list
 * @h: head of linked list
 *
 * Return: length of linked list (number of nodes)
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
