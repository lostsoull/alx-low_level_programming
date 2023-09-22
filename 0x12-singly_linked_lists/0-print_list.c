#include "lists.h"

/**
 * print_list - Print elements in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}

	return (node_count);
}
