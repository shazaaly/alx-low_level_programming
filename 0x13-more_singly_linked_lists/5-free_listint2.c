#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_listint2 - Frees a linked listint_t list
* @head: Pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *nextNode;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	ptr = *head;
	while (ptr != NULL)
	{
		nextNode = ptr->next;
		free(ptr);
		ptr = nextNode;
	}
	*head = NULL;
}
