#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of a listint_t
 * @head: pointer to pointer of lists head
 *
 * Return: head nodes data; 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!(*head))
		return (0);

	temp = *head;
	*head = (*head)->next;

	data = temp->n;
	free(temp);

	return (data);
}
