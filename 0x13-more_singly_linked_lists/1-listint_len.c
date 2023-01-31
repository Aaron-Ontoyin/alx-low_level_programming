#include "lists.h"

/**
 * listint_len - computes the num of elements in a linked list
 * @h: pointer to linked lists
 *
 * Return: Number of element in h
 */
size_t listint_len(const listint_t *h)
{
	size_t num_el = 0;

	while (h != NULL)
	{
		num_el++;
		h = h->next;
	}

	return (num_el);

}
