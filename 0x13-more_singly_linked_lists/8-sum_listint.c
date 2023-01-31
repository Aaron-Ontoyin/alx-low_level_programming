#include "lists.h"

/**
 * sum_listint - computes sum of all nodes data in listint_t
 * @head: poiinter to head node
 *
 * Return: Sum of data; 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
