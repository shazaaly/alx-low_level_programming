#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
* get_nodeint_at_index - Returns the nth node of a linked listint_t list
* @head: Pointer to the head of the list
* @index: Index of the node to return
* Return: Pointer to the nth node, or NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int step = 0;
	unsigned int i;

	for (i = 0; ptr != NULL; i++)
	{
		if (step == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		step++;
	}
	return (NULL);

}
