#include "lists.h"
/**
 * insert_nodeint_at_index - free
 * @head: --
 * @idx: --
 * @n: --
 * Return: new add
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *h = *head;
listint_t *after;
listint_t *new_node;
if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
}
for ( ;h && i < idx; i++)
{
if ((i + 1) == idx)
{
after = h->next;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = after;
h->next = new_node;
return (new_node);
}
h = h->next;
}
return (NULL);
}
