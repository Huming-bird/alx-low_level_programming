#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *nu;
	listint_t *tmp = *head;

	nu = malloc(sizeof(listint_t));
	if (!nu || !head)
		return (NULL);

	nu->n = n;
	nu->next = NULL;

	if (idx == 0)
	{
		nu->next = *head;
		*head = nu;
		return (nu);
	}

	for (a = 0; tmp && a < idx; a++)
	{
		if (a == idx - 1)
	{
		nu->next = tmp->next;
		tmp->next = nu;
		return (nu);
	}
	else
		tmp = tmp->next;
	}

	return (NULL);
}
