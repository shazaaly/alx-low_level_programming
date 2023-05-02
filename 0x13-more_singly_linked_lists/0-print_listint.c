#include "lists.h"
#include "stdio.h"
#include <stddef.h>
/**
* print_listint - Prints the values in a linked list of integers
*
* @h: Pointer to the head of the list
* Return: The number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		printf("\n");
		ptr = ptr->next;
		count++;
	}
	return (count);
}
