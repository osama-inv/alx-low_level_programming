#include "lists.h"
/**
 * get_nodeint_at_index - free
 * @head: --
 * @index: --
 * Return: unsigned int nelem
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nelem = 0;
listint_t *h = head;
while (h != NULL)
{
h = h->next;
nelem++;
if (nelem == index)
return (h);
}
return (h);
}
