#include "lists.h"
/**
 * add_nodeint_end - nvhbf
 * @head: nbv
 * @n: lol
 * Return: lki
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *point = malloc(sizeof(listint_t)), *lem = *head;

	 if (point == NULL)
		 return (NULL);
	 point->n = n;
	 point->next = NULL;
	 if (*head == NULL)
	 {
		 *head = point;
		 return (point);
	 }
	 while (lem->next != NULL)
	 {
		 lem = lem->next;
	 }
	 lem->next = point;
	 return (point);
}
