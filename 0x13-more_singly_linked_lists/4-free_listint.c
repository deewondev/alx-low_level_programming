#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to node to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
