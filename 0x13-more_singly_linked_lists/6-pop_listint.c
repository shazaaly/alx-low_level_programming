#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
* pop_listint - Deletes the head node of a linked listint_t list
* @head: Pointer to a pointer to the head of the list
* Return: The data of the head node, or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *nextNode;
	int data = ptr->n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	*ptr = *head;
	nextNode = ptr->next;
	free(ptr);
	*head = nextNode;
	return (data);
}
