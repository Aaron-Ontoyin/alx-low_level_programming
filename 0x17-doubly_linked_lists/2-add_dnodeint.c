#include "lists.h"
/**
 * add_dnodeint- Inserts new node at the beginnig of a dll
 * @head: pointer to the head
 * @n: the integer to insert
 * Return: The new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dll;

	new_dll = malloc(sizeof(dlistint_t));

	if (new_dll == NULL)
		return (NULL);

	new_dll->n = n;
	new_dll->prev = NULL;
	new_dll->next = *head;

	if (*head != NULL)
		(*head)->prev = new_dll;
	*head = new_dll;

	return (new_dll);
}
