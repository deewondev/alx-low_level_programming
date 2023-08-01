#include "lists.h"

/**
 * loop_listint - function that loops through the entire node in listint_t
 * @head: pointer to the first node in listint_t
 * Return: number of nodes in listint_t
 */
size_t loop_listint(const listint_t *head)
{
	const listint_t *x, *y;
	size_t nodeCount = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	while (y != NULL)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				nodeCount++;
				x = x->next;
				y = y->next;
			}
			x = x->next;
			while (x != y)
			{
				nodeCount++;
				x = x->next;
			}
			return (nodeCount);
		}
		x = x->next;
		y = (y->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked lisr
 * @head: pointer to first node in listint_t
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount, idx = 0;

	nodeCount = loop_listint(head);

	if (nodeCount == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodeCount++;
		}
	}
	else
	{
		while (idx < nodeCount)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			idx++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodeCount);
}
