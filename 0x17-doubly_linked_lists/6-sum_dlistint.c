#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* sum_dlistint - Computes the sum of all the integers stored in a
* doubly linked list.
* @head: pointer to the head node of the list.
*
* Return: The sum of the integers stored in the list.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;

	}
	return (sum);

}

