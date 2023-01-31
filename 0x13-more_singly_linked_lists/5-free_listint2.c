#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to listint_t
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;

	while (*head)
	{
		listint_t *tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
