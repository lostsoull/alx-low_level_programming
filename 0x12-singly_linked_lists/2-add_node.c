#include "lists.h"

/**
 * add_node - Add a new node at the beginning of the linked list
 * @head: Pointer to the pointer to the head of the linked list
 * @str: String to add to the new node in the list
 *
 * Return: NULL if it fails, or the starting address of the updated list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;
	else
	{
		while (str[str_len] != '\0')
			str_len++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = str_len;
	*head = new_node;

	return (*head);
}
