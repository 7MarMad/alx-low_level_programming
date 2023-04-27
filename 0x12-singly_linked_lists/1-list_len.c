#include <stdlib.h>
#include "lists.h"

/**
 * list_len - getting the number of elements in a linked list
 *
 * @h: head of the linked list
 *
 * Return: number of elements we are looking for
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
