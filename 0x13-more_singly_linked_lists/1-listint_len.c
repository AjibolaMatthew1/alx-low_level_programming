#include "lists.h"

/**
 * listint_len - this function returnds the number of element in a linked list
 * @h: the head of the nodes
 * Return: The number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t ele_count;

	ele_count = 0;
	while (h != NULL)
	{
		ele_count += 1;
		h = h->next;
	}
	return (ele_count);
}
