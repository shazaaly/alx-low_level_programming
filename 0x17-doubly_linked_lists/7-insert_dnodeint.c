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
	/* Handle the case where the list is empty and idx > 0 */
	if (*h == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}

	/* Handle the case where the new node needs to be inserted at the beginning of the list */
	if (idx == 0)
	{
		/* Update the next pointer of the new node */
		new->next = *h;
		/* Update the prev pointer of the second node, if it exists */
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		/* Update the head pointer to point to the new node */
		*h = new;
		return (new);
	}
	/* Traverse the list to find the node before the insertion point */
	while (current != NULL && dist < idx - 1)
	{
		dist++;
		current = current->next;
	}
	/* Handle the case where idx is out of bounds */
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	/* Insert the new node at the specified index */
	new->next = current->next;
	current->next = new;
	new->prev = current;
	/* Return a pointer to the new node */
	return (new);
}
