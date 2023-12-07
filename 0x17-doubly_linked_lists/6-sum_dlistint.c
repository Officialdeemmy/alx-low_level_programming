#include "lists.h"

/**
 * sum_dlistint - Calculates sum of all data of a linked list.
 * @head: Pointer to the first node on linked list.
 * Return: The sum of all elements in the linked list. Or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
