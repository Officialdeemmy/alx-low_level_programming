#include "lists.h"
/**
 * sum_listint - gives the sum of all the data (n) of a linked list
 * @head: head data node
 * Return:  sum of all the data (n) or 0
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
