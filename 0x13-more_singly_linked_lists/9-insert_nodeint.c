#include "lists.h"
/**
 * insert_nodeint_at_index - kkjbhvgcf
 * @head: nbhbvg
 * @idx: mnb using opt node
 * @n: lol wirt opt node add
 * Return: lol
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *opt;
	listint_t *b;
	b = *head;

	if (idx != 0)
	{
		for (p = 0; p < idx - 1 && b != NULL; p++)
		{
			b = b->next;
		}
	}
	if (b == NULL && idx != 0)
		return (NULL);
	opt = malloc(sizeof(listint_t));
	if (opt == NULL)
		return (NULL);
	opt->n = n;
	if (idx == 0)
	{
		opt->next = *head;
		*head = opt;
	}
	else
	{
		opt->next = b->next;
		b->next = opt;
	}
	return (opt);
}

