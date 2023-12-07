#include "lists.h"

/**
 * dlistint_len - Counts all the elements in the dlistint_t list.
 * @h: Pointer to the head node of the linked list.
 * Return: Num of nodes on the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);
	for (n = 0; h != NULL; n++)
		h = h->next;
	return (n);
}
