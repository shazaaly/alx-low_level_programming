#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
* free_list - Frees a singly linked list
* @head: Pointer to the head of the list
*/
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *nextNode;

	while (ptr != NULL)
	{
		nextNode = ptr->next;	/*saves a pointer to the next node in the list*/
		free(ptr->str);
		free(ptr);
		ptr = nextNode;
	}

}
