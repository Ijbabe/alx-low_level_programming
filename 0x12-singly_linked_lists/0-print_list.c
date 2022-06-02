#include "lists.h"

/**
 * print_list - print elements of linked list
 * @h: singly linked list
 *
 * Return: 0
 */


size_t print_list(const list_t *h)
{
	size_t nume;

	nume = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else 
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nume++;
	}
	return (nume);
}
