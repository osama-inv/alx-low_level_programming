#include "lists.h"
/**
 * print_list - print linked list
 * @h: string - node
 * Description: singly linked list
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
if (!h->str)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
