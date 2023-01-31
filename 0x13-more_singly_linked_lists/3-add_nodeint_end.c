#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: address of head of listint_t
 * @n: new node
 *
 * Return: Address of new node; NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	tail = *head;

	if (!tail)
		*head = new_node;
	else
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new_node;
	}

	return (new_node);
}
