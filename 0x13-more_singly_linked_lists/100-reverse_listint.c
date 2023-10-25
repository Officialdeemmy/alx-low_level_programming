#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to head link
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp_new;

	if (!head || !(*head))
		return (NULL);

	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		temp_new = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (temp_new == NULL)
			return (*head);
		*head = temp_new;
	}
	if (*head)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
