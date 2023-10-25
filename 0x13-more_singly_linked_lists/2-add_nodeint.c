#include "lists.h"
/**
 * add_nodeint - jn
 * @head: lol
 * @n: bnj
 * Return: bvn
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *point = malloc(sizeof(listint_t));

	if (point == NULL)
		return (NULL);
	point->n = n;
	point->next = *head;
	*head = point;
	return (*head);
}
