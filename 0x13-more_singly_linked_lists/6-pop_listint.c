#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *nextNode;
	int data = ptr->n;

	nextNode = ptr->next;
	free(ptr);
	*head = nextNode;
	return (data);


}