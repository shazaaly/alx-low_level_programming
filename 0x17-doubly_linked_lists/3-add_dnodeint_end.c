#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_dnodeint_end - Adds a new node at the end of a doubly linked list.
* @head: Pointer to a pointer to the head of the list.
* @n: Integer value to be stored in the new node.
*
* Return: Pointer to the new node, or NULL if the allocation fails.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	current = *head;
	/*check if the next node is NULL */
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;

	return (new);
}

