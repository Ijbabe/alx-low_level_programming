#include "lists.h"

/**
 * print_listint- print all element of list
 * @h: head of lists
 *
 * Return: nodes number
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
