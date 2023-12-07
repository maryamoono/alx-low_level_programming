#include "lists.h"
/**
 * add_dnodeint - vcfd jnuy
 * @head: rkol cool
 * @n: ys rap
 * Return: rapy
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *old;
	dlistint_t *v;

	new = malloc(sizeof(dlistint_t));
	if (old == NULL)
		return (NULL);
	old->n = n;
	old->prev = NULL;
	v = *head;
	if (v != NULL)
	{
		while (v->prev != NULL)
			v = v->prev;
	}
	old->next = v;
	if (v != NULL)
		v->prev = old;
	*head = old;
	return (old);
}
