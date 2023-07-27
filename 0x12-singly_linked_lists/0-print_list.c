#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to next node in list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		num++;
	}

	return (num);
}
