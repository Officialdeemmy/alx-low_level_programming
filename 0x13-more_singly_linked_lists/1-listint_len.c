#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);
	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}
