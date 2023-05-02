#include "lists.h"
#include "stdio.h"
#include <stddef.h>
/**
* listint_len - Returns the number of elements in a linked listint_t list
* @h: Pointer to the head of the list
* Return: The number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t length = 0;
	const listint_t *ptr = h;

	if (h == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		ptr = ptr->next;
		length++;
	}
	return (length);
}
