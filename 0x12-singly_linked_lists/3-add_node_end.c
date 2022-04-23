#include "lists.h"

/**
 * add_node_end - this adds a new node at the end of a list_t list
 * @head: this is the node that gives the address of the location new
 * nodes will be added to.
 * @str: this is the string that will be copied as the data of the node
 * Return: the address of the new element or NULL if it failed;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	size_t length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (length = 0; str[length]; length++)
		;
	new_node->len = length;
	new_node->next = NULL;
	temp_node = *head;
	if (temp_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
	}
	return (*head);
}
