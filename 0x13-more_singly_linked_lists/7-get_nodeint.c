#include "lists.h"
/**
 * get_nodeint_at_index - kji
 * @head: jhb
 * @index: kjn
 * Return: lol
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 unsigned int m;

	for (m = 0; m < index && head != NULL; m++)
	{
		head = head->next;
	}
	return (head);
}
