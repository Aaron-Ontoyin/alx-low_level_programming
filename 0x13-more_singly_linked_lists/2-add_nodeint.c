#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginnig of a listint_t
 * @head: address of head of listint_t
 * @n: new node
 *
 * Return: Address of new node; NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
