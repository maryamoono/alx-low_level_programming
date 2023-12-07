#include "lists.h"
/**
 * sum_dlistint - no one wil relize
 * @head: cvdftop
 * Return: 0 nb
 */
int sum_dlistint(dlistint_t *head)
{
	int hmo;

	hmo = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			hmo += head->n;
			head = head->next;
		}
	}

	return (hmo);
}
