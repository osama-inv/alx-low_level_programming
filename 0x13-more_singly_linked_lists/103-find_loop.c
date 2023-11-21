#include "lists.h"
/**
 * find_listint_loop - get
 * @head: head of linked list
 * Return: start of a loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lordre, *vite;

	while (head && (*head).next)
	{
		lordre = head;
		vite = (*head).next;
		while (lordre != vite)
		{
			if (lordre)
				lordre = (*lordre).next;
			if (vite == head)
				return (head);
			if (vite)
				vite = (*vite).next;
			if (vite == head)
				return (head);
			if (vite)
				vite = (*vite).next;
			if (vite == head)
				return (head);
		}
		head = (*head).next;
	}
	return (NULL);
}
