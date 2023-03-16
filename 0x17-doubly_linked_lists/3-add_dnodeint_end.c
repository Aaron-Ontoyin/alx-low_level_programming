#include "lists.h"

/**
 * add_dnodeint_end - Add a node in the tail
 * @head: Pointer to the head
 * @n: The integer to insert
 * Return: The new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_dll, *last_dir;

	new_dll = malloc(sizeof(dlistint_t));

	if (new_dll == NULL)
		return (NULL);

	new_dll->n = n;
	new_dll->next = NULL;
	new_dll->prev = NULL;
	if (*head == NULL)
	{
		*head = new_dll;
		return (new_dll);
	}
	last_dir = *head;

	while (last_dir->next != NULL)
		last_dir = last_dir->next;
	last_dir->next = new_dll;
	new_dll->prev = last_dir;

	return (new_dll);
}
