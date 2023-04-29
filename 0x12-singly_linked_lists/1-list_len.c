#include "lists.h"
#include "stdio.h"
#include <stddef.h>
/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to the head of the list
* Return: the number of elements in the list
*/
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t len = 0;

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}

