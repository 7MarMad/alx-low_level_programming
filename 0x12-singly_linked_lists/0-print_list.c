#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - printing the data in the structres that are linked
 *
 * @h: head of the linked list
 *
 * Return: number of nodes or structres
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
