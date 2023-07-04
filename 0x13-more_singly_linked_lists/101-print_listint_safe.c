#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - printing dat in the list without staying
 * in an endless loop
 * @head: head of linked list
 *
 * Return: number of nodes in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0, count;
	const listint_t *walk, *temp;

	if (head == NULL)
		return (num);
	walk = head;
	while (walk != NULL)
	{
		printf("[%p] %d\n", (void *)walk, walk->n);
		temp = head;
		walk = walk->next;
		count = 0;
		num++;
		while (num > count)
		{
			if (temp == walk)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (num);
			}
			count++;
			temp = temp->next;
		}
	}
	return (num);
}
