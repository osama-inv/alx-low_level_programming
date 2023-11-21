#include "lists.h"

/**
 * free_listp2 - get free()
 * @head: -- listp_t
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *mokat;
	listp_t *haly;

	if (head != NULL)
	{
		haly = *head;
		while ((mokat = haly) != NULL)
		{
			haly = haly->next;
			free(mokat);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t numbeer = 0;
	listp_t *yalo, *new, *getnew;
	listint_t *haly;

	yalo = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = yalo;
		yalo = new;

		getnew = yalo;

		while (getnew->next != NULL)
		{
			getnew = getnew->next;
			if (*h == getnew->p)
			{
				*h = NULL;
				free_listp2(&yalo);
				return (numbeer);
			}
		}

		haly = *h;
		*h = (*h)->next;
		free(haly);
		numbeer++;
	}

	*h = NULL;
	free_listp2(&yalo);
	return (numbeer);
}
