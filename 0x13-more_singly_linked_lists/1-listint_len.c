#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returning number of element in the linked list
 * @h: head of linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (n);
	while (h->next != NULL)
	{
		h = h->next;
		n++;
	}
	n++;
	return (n);
}
