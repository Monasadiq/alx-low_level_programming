#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t list.
 * @head: Apointer to the adress of the head of the listint_t list.
 * Return: if the linked list is empty - 0 otherwise - the head node's data (n).
 */
itn pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (*head == NULL)
		return(0);

	tmp = *head;
	x = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return ( x);
}
