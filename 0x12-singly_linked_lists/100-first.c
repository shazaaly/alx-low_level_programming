#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void printList(list_t *head)
{
	list_t *node = head;
	while (node != NULL)
	{
		printf("%s",node->str);
		node = node->next;
	}

}
