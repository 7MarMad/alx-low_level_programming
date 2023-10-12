#ifndef LIST_H
#define LIST_H

/**
 * struct dlisint_s - doubly linked list
 * @n: integre
 * @next: points to the next node
 * @prev: points the the previous node
 *
 * Description: doubly linked list node structre
 *
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
