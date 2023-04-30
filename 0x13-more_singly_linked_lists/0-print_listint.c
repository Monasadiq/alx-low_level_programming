#include "list.h"
/**
 * print_listint - function that prints all the elements of
 * a listint_t list.
 *
 * @m: Parameter Pointer to the head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_h *m)
{
	size_t k=0;
	if ( m==NULL)
	{
		return(0);}
	while (m!==NULL)
	{
		printf("%i\n", m->k);
		m= m->next;
		k++;
	}
	return (k);
}

