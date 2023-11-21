#include "lists.h"
/**
 * delete_nodeint_at_index - free
 * @head: --
 * @index: --
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *have, *rm;
unsigned int i, work = 0;
if (!*head)
return (-1);
for (i = 0, have = *head; have && index; i++, have = (*have).next)
if (i == (index - 1))
{
work = 1;
break;
}
if (work)
{
rm = (*have).next;
(*have).next = (*rm).next;
free(rm);
return (1);
}
else if (!index && (**head).next)
{
rm = *head;
*head = (*rm).next;
free(rm);
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
