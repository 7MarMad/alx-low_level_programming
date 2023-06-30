#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_len - length of string
 * @str: string to work on
 *
 * Return: length of the string
 */
int str_len(const char *str)
{
        int len = 0;

        if (str == NULL)
                return (-1);
        while (str[0] != '\0')
        {
                len++;
                str++;
        }
        return (len);
}

/**
 * add_node - adding a node to the begining if the linked list
 * @head: current head if linked list
 * @str: string to be duplicated in the node made
 *
 * Return: pointer to the new head (the new added node)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int lenn;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	lenn = str_len(str);
	if (lenn != -1)
	{
		new->str = strdup(str);
		new->len = lenn;
	}
	else
		new->str = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
