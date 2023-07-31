#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: double pointer to next node in listint_t
 * @idx: index where new node will be added in listint_t
 * @n: data of listint_t
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0 || *head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
