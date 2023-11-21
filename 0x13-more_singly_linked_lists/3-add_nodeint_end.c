#include "lists.h"
/**
 * add_nodeint_end - singly linked list
 * @n: --
 * @head: --
 * Return: new address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *id = *head;
listint_t *neww = malloc(sizeof(listint_t));
if (neww == NULL)
return (NULL); /* Check if allocation failed*/
neww->n = n; /* Set the int value*/
neww->next = NULL; /* Set the next of the new node*/
if (*head == NULL)
{
*head = neww;
return (neww);
}
while (id->next != NULL)
id = id->next;
id->next = neww;
return (neww); /* Return the new node*/
}
