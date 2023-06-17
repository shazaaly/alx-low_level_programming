#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* in a doubly linked list.
* @h: pointer to a pointer to the head node of the list.
* @idx: index of the node to insert.
* @n: value to store in the new node.
*
* Return: Pointer to the new node, or NULL if the operation fails.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int dist = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new;
			*h = new;
			return (new);
		}

	}
	while (current != NULL && dist < idx - 1)
	{
		dist++;
		current = current->next;
	}
	new->next = current->next;
	current->next = new;
	new->prev = current;

	return (new);
}

