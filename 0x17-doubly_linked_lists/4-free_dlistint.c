#include "lists.h"
/**
 * free_dlistint - Frees dll
 * @head: Pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *mem;

	while (head != NULL)
	{
		mem = head->next;
		free(head);
		head = mem;
	}
}
