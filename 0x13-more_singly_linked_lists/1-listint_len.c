#include "lists.h"
/**
 * listint_len - print
 * @h: pointer
 * Return: num
 */
size_t listint_len(const listint_t *h)
{
size_t nelem;
nelem = 0;
while (h != NULL)
{
h = h->next;
nelem++;
}
return (nelem);
}
