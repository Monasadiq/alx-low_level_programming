#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the
 * end of a listint_t list.
 * @head: a pointer to the adress of the head
 * of the listint_t list.
 * @n: the integer of the point.
 *
 * Return: if the function fails - NULL.
 * otherwise-the adress of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first, *last;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
         return (NULL);

	 first->n = n;
	 first->next = NULL;

	 if (*head == NULL)
		 *head = first;

	 else
	 {
		 last = *head;
		 while (last->next != NULL)
			 last = last->next;
		 last->next = first;
	 }
	 return(*head);
}
