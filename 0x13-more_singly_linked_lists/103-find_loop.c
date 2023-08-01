#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to first node in listint_t
 * Return: node address where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x, *y;

	if (head == NULL || head->next == NULL)
		return (NULL);

	x = head->next;
	y = (head->next)->next;

	while (y != NULL)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (x);
		}
		x = x->next;
		y = (y->next)->next;
	}
	return (NULL);
}
