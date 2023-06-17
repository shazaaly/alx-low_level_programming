#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* get_dnodeint_at_index - Returns the nth node of a doubly linked list.
* @head: Pointer to the head of the list.
* @index: Index of the node to return (starting from 0).
*
* Return: Pointer to the nth node, or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int dist = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;
	while (current != NULL && dist < index)
	{
		current = current->next;
		dist++;
	}
	return (current);


}

