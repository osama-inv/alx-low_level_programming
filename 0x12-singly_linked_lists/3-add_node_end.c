#include "lists.h"

/**
 * Count - Count
 * @c: string - str
 * Return: Count
 */
unsigned int Count(char *c)
{
unsigned int i = 0;
if (!c)
return (0);
while (c[i])
{
i++;
}
return (i);
}
/**
 * add_node - add_node
 * @head: list_t
 * @str: char *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *id = *head;
list_t *neww = malloc(sizeof(list_t)); /* Allocate memory for the new node*/
if (neww == NULL)
return (NULL); /* Check if allocation failed*/
neww->str = strdup(str); /* Set the string value of the new node*/
neww->len = Count(neww->str); /* Calculate the length of the string*/
neww->next = NULL; /* Set the next of the new node to the current head*/
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
