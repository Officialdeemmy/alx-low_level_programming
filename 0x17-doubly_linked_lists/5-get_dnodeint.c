#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of linked list.
 * @head: Pointer to the first node of linked list.
 * @index: Node index to return.
 * Return: If found node at the index. Otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; head != NULL && n <= index; n++)
	{
		if (n == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
