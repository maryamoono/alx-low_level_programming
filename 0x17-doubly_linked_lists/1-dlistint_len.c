#include "lists.h"
/**
 *dlistint_len - ya allah
 *@h: i well cants
 *Return:hm lol
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
