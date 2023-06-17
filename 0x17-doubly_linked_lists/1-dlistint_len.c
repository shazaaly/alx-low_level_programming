#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* dlistint_len - returns the number of elements in a doubly linked list
* @h: pointer to the head of the list
*
* Return: the number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = NULL;

	if (h == NULL)
	{
		return (0);
	}
	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

