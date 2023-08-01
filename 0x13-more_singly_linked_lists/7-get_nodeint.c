#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 * @head: pointer to next node in listint_t
 * @index: node index
 * Return: nth node of listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (head != NULL && i < index)
		{
			head = head->next;
			i++;
		}

		return (head);
	}
}
