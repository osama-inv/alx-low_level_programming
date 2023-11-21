#include "lists.h"

/**
 * reverse_listint - rev
 * @head: --
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last;
	listint_t *header;
	last = NULL;
	header = NULL;
	while (*head != NULL)
	{
		last = (*head)->next;
		(*head)->next = header;
		header = *head;
		*head = last;
	}
	*head = header;
	return (*head);
}
