#include "lists.h"
#include "stdio.h"
#include <stddef.h>

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
