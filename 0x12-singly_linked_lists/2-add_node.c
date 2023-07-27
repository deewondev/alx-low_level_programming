#include "lists.h"

/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: pointer to next node of list_t
 * @str: add new string to the node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new_list;

	while (str[len])
		len++;

	new_list = malloc(sizeof(list_t));

	if (!new_list)
		return (NULL);

	new_list->str = strdup(str);
	new_list->len = len;
	new_list->next = *head;
	*head = new_list;

	return (*head);
}
