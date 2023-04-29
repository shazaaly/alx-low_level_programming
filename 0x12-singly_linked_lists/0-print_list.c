#include "lists.h"
#include "stdio.h"
#include <stddef.h>
/**
* print_list - prints all the elements of a linked list of type list_t
* @h: pointer to the head of the list
* Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
size_t len = 0;  /*counter*/
const list_t *ptr = h;  /* pointer to travers of same type*/

while (ptr != NULL)
{
	printf("[%d] %s\n", ptr->len, (ptr->str == NULL ? "(nil)" : ptr->str));
	ptr = ptr->next; /*move pointer*/
	len++;
}
	return (len);
}
