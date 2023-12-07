#include "lists.h"
/**
 * get_dnodeint_at_index - bgv fol
 * @head: xzas
 * @index: koll
 * Return: zza
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int v;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	v = 0;
	while (head != NULL)
	{
		if (v == index)
			break;
		head = head->next;
		v++;
	}
	return (head);
}
