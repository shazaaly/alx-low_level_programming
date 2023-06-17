#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* add_dnodeint - adds a new node at the beginning of a doubly linked list
* @head: pointer to a pointer to the head of the list
* @n: integer value to be stored in the new node
*
* Return: pointer to the new node, or NULL if the allocation fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;

	}
	return (new);

}

