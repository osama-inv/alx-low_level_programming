#include "lists.h"
/**
 * add_nodeint - singly linked list
 * @n: --
 * @head: --
 * Return: new address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *neww = malloc(sizeof(listint_t));
if (neww == NULL)
return (NULL); /* Check if allocation failed*/
neww->n = n; /* Set the string value of the new node*/
neww->next = *head; /* Set the next of the new node*/
*head = neww;
return (neww); /* Return the new node*/
}
