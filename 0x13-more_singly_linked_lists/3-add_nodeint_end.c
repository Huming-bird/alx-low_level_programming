#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nu;
	listint_t *tmp = *head;

	nu = malloc(sizeof(listint_t));
	if (!nu)
		return (NULL);

	nu->n = n;
	nu->next = NULL;

	if (*head == NULL)
	{
		*head = nu;
		return (nu);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nu;

	return (nu);
}
