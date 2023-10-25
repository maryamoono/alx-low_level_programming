#include "lists.h"
/**
 * pop_listint - kijn
 * @head: nj
 * Return: lol
 */
int pop_listint(listint_t **head)
{
	listint_t *point;
	int n = 0;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	point = *head;
	*head = (*head)->next;
	free(point);
	return (n);
}

