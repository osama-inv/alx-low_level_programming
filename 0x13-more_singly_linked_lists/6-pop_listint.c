#include "lists.h"
/**
 * pop_listint - free
 * @head: --
 * Return: n
 */
int pop_listint(listint_t **head)
{
int n = 0;
listint_t *get = *head;
if (get == NULL)
return (n);
*head = get->next;
n = get->n;
free(get);
return (n);
}
