#include "lists.h"
/**
 * free_list - just have fun
 * @head: on klef
 * Return: ruio
 */
void free_list(list_t *head)
{
	list_t *lemnon;

	while ((lemnon = head) != NULL)
	{
		head = head->next;
		free(lemnon->str);
		free(lemnon);
	}
}
