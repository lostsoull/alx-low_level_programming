#include "lists.h"

/**
 * free_list - Free a singly linked list
 * @head: Pointer to the first node of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
