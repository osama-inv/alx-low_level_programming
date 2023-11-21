#include "lists.h"

/**
 * free_listp2 - get free
 * @head: head
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
 * free_listint_safe - def.
 * @h: head.
 * Return: range
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_num = 0;
	listp_t *getnew, *new, *ajouter;
	listint_t *haly;

	getnew = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = getnew;
		getnew = new;

		ajouter = getnew;

		while (ajouter->next != NULL)
		{
			ajouter = ajouter->next;
			if (*h == ajouter->p)
			{
				*h = NULL;
				free_listp2(&getnew);
				return (node_num);
			}
		}

		haly = *h;
		*h = (*h)->next;
		free(haly);
		node_num++;
	}

	*h = NULL;
	free_listp2(&getnew);
	return (node_num);
}
