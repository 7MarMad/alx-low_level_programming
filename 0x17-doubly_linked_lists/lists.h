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
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif
