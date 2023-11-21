#include "lists.h"
/**
 * free_listint2 - free
 * @head: --
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *rm;
while (*head)
{
rm = *head;
*head = (*head)->next;
free(rm);
}
}
