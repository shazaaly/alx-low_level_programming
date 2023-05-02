#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>

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