#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
* sum_listint - Returns the sum of all the data (n) of a linked listint_t list
* @head: Pointer to the head of the list
* Return: The sum of all the data in the list, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
