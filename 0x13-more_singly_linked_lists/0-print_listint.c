#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - printing the element in ech node of linked list
 * @h: head of linked list
 *
 * Return: number of elements(nodes) in linked list
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
