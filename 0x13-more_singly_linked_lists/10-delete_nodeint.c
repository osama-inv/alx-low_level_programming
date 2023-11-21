#include "lists.h"
/**
 * delete_nodeint_at_index - free
 * @head: --
 * @index: --
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempp;
listint_t *getrm;
unsigned int i;
unsigned int fire = 0

if (!*head)
return (-1);
for (i = 0, tempp = *head; tempp && index; i++, tempp = (*tempp).next)
if (i == (index - 1))
{
fire = 1;
break;
}
if (fire)
{
getrm = (*tempp).next;
(*tempp).next = (*getrm).next;
free(getrm);
return (1);
}
else if (!index && (**head).next)
{
getrm = *head;
*head = (*getrm).next;
free(getrm);
return (1);
}
else if (!index && *head)
{
*head = NULL;
free(*head);
return (1);
}
return (-1);
}
