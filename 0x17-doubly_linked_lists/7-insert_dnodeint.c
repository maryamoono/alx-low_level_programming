#include "lists.h"
/**
 * insert_dnodeint_at_index - vfcdx
 * @h: hello
 * @idx: how are u
 * @n: vfcgoof
 * Return: fdc
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *old;
	dlistint_t *head;
	unsigned int v;

	old = NULL;
	if (idx == 0)
		old = add_dnodeint(h, n);
	else
	{
		head = *h;
		v = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (v == idx)
			{
				if (head->next == NULL)
					old = add_dnodeint_end(h, n);
				else
				{
					old = malloc(sizeof(dlistint_t));
					if (old != NULL)
					{
						old->n = n;
						old->next = head->next;
						old->prev = head;
						head->next->prev = old;
						head->next = old;
					}
				}
				break;
			}
			head = head->next;
			v++;
		}
	}

	return (old);
}
