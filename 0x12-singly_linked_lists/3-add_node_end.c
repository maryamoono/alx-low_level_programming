#include "lists.h"
/**
 * add_node_end - skin
 * @head: ryhf
 * @str: splokm
 * Return: aerfv
 */
list_t *add_node_end(list_t **head, const char *str)
{
	static list_t *liat;
	list_t *ptr = malloc(sizeof(list_t)), *tem;

	while (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	tem = *head;
	if (tem == NULL)
	{
		liat = ptr;
		*head = liat;
	}
	else
	{
		liat->next = ptr;
		liat = ptr;
	}
	return (ptr);
}
