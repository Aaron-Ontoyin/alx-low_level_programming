#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - gets the nth node of a listint_t
 * @head: head to listint_t
 * @index: index to get
 *
 * Return: Pionter to the found node; NULL if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	if (!head)
		return (NULL);

	while (index--)
	{
		if (node->next)
			node = node->next;
		else
			return (NULL);
	}

	return (node);
}
