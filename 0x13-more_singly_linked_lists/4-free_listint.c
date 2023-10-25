#include "lists.h"
/**
 * free_listint - kmjn
 * @head: njbh
 * Return: mk
 */
void free_listint(listint_t *head)
{
	listint_t *point;

	while (head != NULL)
	{
		point = head;
		head = head->next;
		free(point);
	}
}
