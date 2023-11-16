#include "lists.h"
/**
 * Count - Count
 * @c: string - str
 * Return: singly linked list
 */
unsigned int Count(char *c)
{
unsigned int i = 0;
if (!c)
return (0);
while (c[i])
i++;
return (i);
}
/**
 * add_node - Count
 * @head: head
 * @str: head
 * Return: address for the new head
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *neww = malloc(sizeof(list_t)); /* Allocate memory for the new node*/
if (neww == NULL)
return (NULL); /* Check if allocation failed*/
neww->str = strdup(str); /* Set the string value of the new node*/
neww->len = Count(neww->str); /* Calculate the length of the string*/
neww->next = *head; /* Set the next of the new node to the current head*/
*head = neww; /* Update the head to point to the new node*/
return (neww); /* Return the new node*/
}
