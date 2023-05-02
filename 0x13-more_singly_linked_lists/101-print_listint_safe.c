#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - printing a linked list and returning number of els
 *
 * @head: head of linked list
 *
 * Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	int n = 0, ex_count = 0;
	const listint_t *walker, *rep;

	if (head == NULL)
		exit(98);
	walker = head;
	while (walker != NULL)
	{
		printf("[%p] %d\n", (void *)walker, walker->n);
		walker = walker->next;
		rep = head;
		ex_count = 0;
		n++;
		while (ex_count < n)
		{
			if (rep == walker)
			{
				printf("-> [%p] %d\n", (void *)rep, rep->n);
				return (n);
			}
			rep = rep->next;
			ex_count++;
		}
	}
	return (n);
}
