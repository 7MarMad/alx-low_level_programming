#include <stdio.h>
#include "lists.h"

/**
 * print_listint - printing the elements of a linked list
 *
 * @h: head of linked list
 *
 * Return: number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	int m = 0;

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	m++;
	while (h->next != NULL)
	{
		h = h->next;
		printf("%d\n", h->n);
		m++;
	}
	return (m);
}
