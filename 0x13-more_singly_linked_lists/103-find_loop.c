#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1 = head;
	listint_t *temp2 = head;

	if (!head)
		return (NULL);

	while (temp2 && temp1 && temp1->next)
	{
		temp1 = temp1->next->next;
		temp2 = temp2->next;
		if (temp1 == temp2)
		{
			temp2 = head;
			while (temp2 != temp1)
			{
				temp2 = temp2->next;
				temp1 = temp1->next;
			}
			return (temp1);
		}
	}

	return (NULL);
}
