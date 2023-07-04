#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finding where the loop start in a linked list
 * @head: head of linked list
 *
 * Return: address of the first node where loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);
	while (head != NULL && head->next != NULL)
	{
		if ((head->next) - head < 0)
			return (head->next);
		head = head->next;
	}
	return (NULL);
}
