#include "lists.h"
/**
 * print_listint - bvnfyh
 * @h: bvgncy
 * Return: num in fris
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
