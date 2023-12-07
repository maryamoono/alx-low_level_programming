#include "lists.h"
/**
 * delete_dnodeint_at_index - i wluld love to
 * @head: hond
 * @index: cssdvv
 * Return: 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c1;
	dlistint_t *c2;
	unsigned int v;

	c1 = *head;

	if (c1 != NULL)
		while (c1->prev != NULL)
			c1 = c1->prev;

	v = 0;

	while (c1 != NULL)
	{
		if (v == index)
		{
			if (v == 0)
			{
				*head = c1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				c2->next = c1->next;

				if (c1->next != NULL)
					c1->next->prev = c2;
			}

			free(c1);
			return (1);
		}
		c2 = c1;
		c1 = c1->next;
		v++;
	}

	return (-1);
}
