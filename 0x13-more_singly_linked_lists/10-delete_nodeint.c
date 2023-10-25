#include "lists.h"
/**
 * delete_nodeint_at_index - jskwdkbw
 * @head: lko
 * @index: lo
 * Return: lol
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m ;
	listint_t *opt;
	listint_t *num;
	opt = *head;

	if (index != 0)
	{
		for (m = 0; m < index - 1 && opt != NULL; m++)
		{
			opt = opt->next;
		}
	}
	if (opt == NULL || (opt->next == NULL && index != 0))
	{
		return (-1);
	}
	num = opt->next;
	if (index != 0)
	{
		opt->next = num->next;
		free(num);
	}
	else
	{
		free(opt);
		*head = num;
	}
	return (1);
}

