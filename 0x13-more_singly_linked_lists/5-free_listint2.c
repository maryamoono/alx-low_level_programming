#include "lists.h"
/**
 * free_listint2 - kjn
 * @head: kjh
 * Return: kj
 */
void free_listint2(listint_t **head)
{
	listint_t *pint;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		pint = *head;
		pint = pint->next;
		free(*head);
		*head = pint;
	}
}

