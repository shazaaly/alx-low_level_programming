#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_listint - Adds a new node at the end of a linked listint_t list
* @head: Pointer to a pointer to the head of the list
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *nextNode;

	while (ptr != NULL)
	{
		nextNode = ptr->next;
		free(ptr);
		ptr = nextNode;
	}
}
