#include "lists.h"
/**
 * add_dnodeint_end - hvb
 * @head: old fop
 * @n: rapy
 * Return: raot
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *v;
	dlistint_t *old;

	old = malloc(sizeof(dlistint_t));
	if (old == NULL)
		return (NULL);

	old->n = n;
	old->next = NULL;

	v = *head;

	if (v != NULL)
	{
		while (v->next != NULL)
			v = v->next;
		v->next = old;
	}
	else
	{
		*head = old;
	}

	old->prev = v;

	return (old);
}
