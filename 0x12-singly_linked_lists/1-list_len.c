#include "lists.h"
/**
 * list_len - give n of linked list
 * @h: string - node
 * Description: singly linked list
 * Return: num of nodes
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
