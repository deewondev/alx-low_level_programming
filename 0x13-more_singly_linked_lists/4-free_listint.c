#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to node to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
