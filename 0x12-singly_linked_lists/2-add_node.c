#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node - adds a new node to the beginning of a linked list
* @head: pointer to the head of the list
* @str: string to be added to the new node
* Return: pointer to the new node, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
