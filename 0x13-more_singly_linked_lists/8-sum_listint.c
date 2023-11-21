#include "lists.h"
/**
 * sum_listint - free
 * @head: --
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (!head)
return (sum);
for (; head; head = head->next)
sum += head->n;
return (sum);
}
