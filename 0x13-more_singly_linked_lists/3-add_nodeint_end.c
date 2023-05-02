#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
* add_nodeint_end - Adds a new node at the end of a linked listint_t list
* @head: Pointer to a pointer to the head of the list
* @n: The integer value to store in the new node
* Return: Pointer to the new node, or NULL if the function fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new_node =  malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (new_node);
}
