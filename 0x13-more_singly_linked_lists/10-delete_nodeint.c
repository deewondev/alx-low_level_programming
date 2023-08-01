#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list
 * @head: double pointer to next node in listint_t
 * @index: node index that should be deleted
 * Return: 1 if success, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current = *head, *delNode = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current != NULL && i < (index - 1))
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	delNode = current->next;
	current->next = delNode->next;
	free(delNode);

	return (1);
}
