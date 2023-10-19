#include "lists.h"
/**
 * list_len - mk jklon
 * @h: md
 * Return: hjk
 */
size_t list_len(const list_t *h)
{
	unsigned int lemn = 0;

	while (h != NULL)
	{
		h = h->next;
		lemn++;
	}
	return (lemn);
}
