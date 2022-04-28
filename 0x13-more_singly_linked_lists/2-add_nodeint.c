#include "lists.h"

/**
 * add_nodeint -adds a new node at the beginning
 * @n:element
 * @head: head
 *
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *node2;

	node2 = malloc(sizeof(listint_t));

	if (node2 == NULL)
		return (NULL);
	node2->n = n;
	node2->next = *head;
	*head = node2;

	return (*head);
}
