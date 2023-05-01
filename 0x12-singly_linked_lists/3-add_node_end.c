#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - Adds a new node to the end of a singly linked list
* @head: Pointer to the head of the list
* @str: String to add as the data in the new node
* Return: Pointer to the new node, or NULL if memory allocation fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (new_node);
}