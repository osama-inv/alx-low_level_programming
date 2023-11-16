#include "lists.h"

/**
 * free_list - Count
 * @head: string - str
 * Return: void
 */
void free_list(list_t *head)
{
list_t *rm;
while (head)
{
rm = head;
head = head->next;
free(rm->str);
free(rm);
}
}
