#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: double pointer to first node in listint_t
 * Return: pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL, *nextNode = NULL;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}

	*head = prevNode;
	return (*head);
}
