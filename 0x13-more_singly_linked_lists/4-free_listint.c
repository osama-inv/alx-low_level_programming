#include "lists.h"
/**
 * free_listint - free
 * @head: --
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *rm;
while (head)
{
rm = head;
head = head->next;
free(rm);
}
}
