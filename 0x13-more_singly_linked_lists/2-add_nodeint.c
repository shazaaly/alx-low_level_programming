#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
* add_nodeint - Adds a new node at the beginning of a linked listint_t list
* @head: Pointer to a pointer to the head of the list
* @n: The integer value to store in the new node
* Return: Pointer to the new node, or NULL if the function fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode  = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->next = *head;
	newNode->n = n;
	*head = newNode;
	return (newNode);
}
