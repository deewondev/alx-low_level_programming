#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: double pointer to first node in listint_t
 * Return: pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
