#include <stddef.h>
#include "lists.h"

/**
 * list_len - length of the linked list
 * @h: head of linked list
 *
 * Return: lenght of the linked list being returned
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
