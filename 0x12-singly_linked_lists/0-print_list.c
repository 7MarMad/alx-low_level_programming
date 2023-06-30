#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - printing the string with its length the stdout
 * @h: pointer to head of linked list
 *
 * Return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
