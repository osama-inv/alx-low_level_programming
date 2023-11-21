#include "lists.h"

/**
 * free_listp - get gree
 * @head: --
 *
 * Return: --
 */
void free_listp(listp_t **head)
{
	listp_t *moaqat;
	listp_t *haly;

	if (head != NULL)
	{
		haly = *head;
		while ((moaqat = haly) != NULL)
		{
			haly = haly->next;
			free(moaqat);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - screen
 * @head: head
 * Return: num.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t newnode = 0;
	listp_t *tecc, *new, *tagadd;

	tecc = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = tecc;
		tecc = new;

		tagadd = tecc;

		while (tagadd->next != NULL)
		{
			tagadd = tagadd->next;
			if (head == tagadd->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&tecc);
				return (newnode);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		newnode++;
	}
	free_listp(&tecc);
	return (newnode);
}
