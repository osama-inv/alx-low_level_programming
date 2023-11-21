#include "lists.h"
/**
 * delete_nodeint_at_index - free
 * @head: --
 * @index: --
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *h = *head;
listint_t *delet;
unsigned int i;

for (i = 0; h && i < index - 1; i++)
h = h->next;

if (h == NULL && index != 0)
return (-1);

if (index == 0)
{
delet = *head;
*head = (*head)->next;
}
else
{
delet = h->next;
if (delet)
h->next = delet->next;
}
free(delet);
return (1);
}
