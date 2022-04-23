#include "lists.h"

/**
 * add_node - this function adds node to the beginning of a list
 * @head: this the node that a new node will be added to
 * @str: this is the string that would represent the content of the node
 * that is added
 * Return: the address of the new element or null if operation failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;
	size_t length;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		for (length = 0; str[length] != '\0'; length++)
			;
		new_node->len = length;
		new_node->next = *head;
		*head = new_node;

	}
	else
	{
		return (NULL);
	}
	return (*head);
}
