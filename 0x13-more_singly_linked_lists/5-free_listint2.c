#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: node to be freed
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (current == NULL)
		return;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}

	*head = NULL;
}
