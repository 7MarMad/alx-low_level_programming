#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - printing elements in doublly linked list
 * @h: head of linked list
 *
 * Return: number of nodes in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
