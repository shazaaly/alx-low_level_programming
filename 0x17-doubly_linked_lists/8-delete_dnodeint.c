#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at index of a dlistint_t linked list.
* @head: Pointer to a pointer to the head node of the list.
* @index: Index of the node to be deleted.
*
* Return: 1 if successful, -1 otherwise.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int dist = 0;

	/* Handle an empty list */
	if (*head == NULL)
	{
		return (-1);
	}

	/* Handle deleting the first node */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	/* Traverse the list to find the node before the deletion point */
	while (current != NULL && dist < index - 1)
	{
		dist++;
		current = current->next;
	}

	/* Handle deleting a node that doesn't exist */
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	/* Delete the node at the specified index */
	current->next = current->next->next;
	if (current->next != NULL)
	{
		current->next->prev = current;
	}
	free(current->next);

	return (1);
}
