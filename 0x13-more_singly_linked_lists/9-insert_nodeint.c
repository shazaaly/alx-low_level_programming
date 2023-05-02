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
	listint_t *ptr = *head;
	unsigned int i;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (n < 0)
	{
		return (NULL);
	}
	if (*head == NULL || idx == 0)
	{
		*head = newNode;
		return (newNode);
	}
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	for (i = 0; i < idx - 1 && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	newNode->next = ptr->next;
	ptr->next = newNode;
	return (newNode);

}
