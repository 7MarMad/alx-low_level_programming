#include "lists.h"

/**
 * dlistint_len - calculating number of nodes in a linked list
 * @h: head of linked list
 *
 * Return: the sum of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
