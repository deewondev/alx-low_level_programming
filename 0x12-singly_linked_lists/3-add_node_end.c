#include "lists.h"

/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list
 * @head: double pointer to list_t
 * @str: add new string to new node
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new_list, *temp = *head;

	while (str[len])
		len++;

	new_list = malloc(sizeof(list_t));

	if (!new_list)
		return (NULL);

	new_list->str = strdup(str);
	new_list->len = len;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_list;

	return (new_list);
}
