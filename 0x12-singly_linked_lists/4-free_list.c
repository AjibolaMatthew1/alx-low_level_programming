# include "lists.h"

/**
 * free_list - this frees a list_t list.
 * @head: address of node to be free;
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
