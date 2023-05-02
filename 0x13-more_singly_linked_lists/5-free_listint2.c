#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_listint - Frees a linked listint_t list
* @head: Pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *nextNode;

	while (ptr != NULL)
	{
		nextNode = ptr->next;
		free(ptr);
		ptr = nextNode;
	}
	*head = NULL;
}
