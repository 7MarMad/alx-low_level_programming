#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - freeing the linked list
 *
 * @h: head of linked list
 *
 * Return: the size of the list tha was freed
 */
size_t free_listint_safe(listint_t **h)
{
	int n = 0;
	listint_t *walker;

	if (*h == NULL)
		return (n);
	walker = *h;
	while (walker != NULL)
	{
		if (((walker->next) - walker) > 0)
		{
			walker = (*h)->next;
			free(*h);
			n++;
			*h = walker;
		}
		else
		{
			free(*h);
			n++;
			break;
		}
	}
	*h = NULL;
	return (n);
}
