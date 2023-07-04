#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - freeing allocated memory of possible looped linked list
 * @h: current head of linked list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp, *walker;

	if (h == NULL)
		return (size);
	walker = *h;
	while (walker != NULL)
	{
		if ((walker->next) - walker > 0)
		{
			temp = walker->next;
			free(walker);
			walker = temp;
			size++;
		}
		else
		{
			size++;
			free(walker);
			break;
		}
	}
	*h = NULL;
	return (size);
}
