#include "lists.h"
/**
 * sum_listint - knhb
 * @head: lkm
 * Return: nj
 */
int sum_listint(listint_t *head)
{
	int c;

	c = 0;
	while (head != NULL)
	{
		c += head->n;
		head = head->next;
	}
	return (c);
}

