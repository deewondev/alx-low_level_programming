#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: node to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
}
