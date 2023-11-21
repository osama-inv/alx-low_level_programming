#include "lists.h"
/**
 * print_listint - print
 * @h: pointer
 * Return: num
 */
size_t print_listint(const listint_t *h)
{
size_t nelem;
nelem = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nelem++;
}
return (nelem);
}
