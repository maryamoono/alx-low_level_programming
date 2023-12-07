#include "lists.h"
/**
 * free_dlistint - smoone
 * @head: cool la
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *pol;

	while (head != NULL)
	{
		pol = head;
		head = head->next;
		free(pol);
	}
}
