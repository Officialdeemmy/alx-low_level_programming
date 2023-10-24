#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head link address
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
