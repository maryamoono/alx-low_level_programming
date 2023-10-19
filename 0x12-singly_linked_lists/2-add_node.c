#include "lists.h"
/**
 * add_node - hvngfb
 * @head: klmlcmdlf
 * @str: jkdn
 * Return: jn
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	while (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
