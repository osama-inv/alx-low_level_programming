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
unsigned int i;
listint_t *h = *head;
listint_t *new_node;

for (i = 0; h && i < idx - 1; i++)
h = h->next;

if (h == NULL && idx != 0)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
new_node->next = h->next;
h->next = new_node;
return (new_node);
}
