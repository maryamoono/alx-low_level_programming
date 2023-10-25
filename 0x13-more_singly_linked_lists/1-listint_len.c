#include "lists.h"
/**
 * listint_len - hvbfgn
 * @h: nvhm
 * Return: lki
 */
size_t listint_len(const listint_t *h)
{
	int lem = 0;

	while (h)
	{
		h = h->next;
		lem++;
	}
	return (lem);
}
