#include "lists.h"
/**
 * pop_listint - free
 * @head: --
 * Return: n
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *get = *head;
*head = get->next;
n = get->n;
free(get);
return (n);
}
