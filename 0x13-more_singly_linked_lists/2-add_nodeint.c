#include "lists.h"

/**
 * add_nodeint - this function adds a new node at the beginning of a list
 * @head: this is the head of the nodes
 * @n: integer to be added
 * Return: this returns a pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
	}
	else
	{
		return (NULL);
	}
	return (*head);
}
