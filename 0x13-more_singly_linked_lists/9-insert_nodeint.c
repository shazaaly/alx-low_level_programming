#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to a pointer to the head of the list
* @idx: Index where the new node should be added
* @n: Data value of the new node
* Return: The address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	unsigned int steps = 0;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (n < 0)
	{
		return (NULL);
	}
	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (newNode == NULL)
	{
		free(newNode);
	}

	while (ptr != NULL)
	{
		if (steps == idx)
		{
			ptr->next = newNode;
			return (newNode);
		}
		ptr = ptr->next;
	}
	return (NULL);

}
