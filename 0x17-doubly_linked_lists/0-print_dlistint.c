#include "lists.h"
/**
 * print_dlistint - Prints all the nodes of doubly linked list
 * @h: pointer to node structure
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
