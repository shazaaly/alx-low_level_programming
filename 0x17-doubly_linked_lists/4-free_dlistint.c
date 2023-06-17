#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_dlistint - Frees a doubly linked list of integers.
* @head: Pointer to the head of the list.
*
* Return: void.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	if (head == NULL)
	{
		return;
	}
	else
	{
		current = head;
		while (current->next != NULL)
		{
			current = current->next;
			free(current->prev);

		}
		free(current);

	}

}

