#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data (n) of a
 * listint_t linked list
 * @head: pointer to next node in listint_t
 * Return: sum of all data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	free(temp);

	return (sum);
}
