#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* printList - Prints the strings in a linked list
* @head: Pointer to the head of the list
*/
void printList(list_t *head)
{
	list_t *node = head;

	while (node != NULL)
	{
		printf("%s", node->str);
		node = node->next;
	}

}

