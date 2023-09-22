#include "lists.h"

/**
 * add_node_end - Add a new node at the end of the linked list
 * @head: Pointer to the pointer to the head of the linked list
 * @str: String to add to the new node in the list
 *
 * Return: NULL if it fails, or the starting address of the updated list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
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

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = str_len;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
