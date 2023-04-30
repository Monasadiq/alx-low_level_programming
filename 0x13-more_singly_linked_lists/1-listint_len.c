#include "lists.h"

size_t listint_len(const listint*h)
{
	size_t n=0;
	while (h!=NULL)
	{
		h=h->next;
		n++;
return (n) ;
	}
