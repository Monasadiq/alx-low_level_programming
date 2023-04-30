#include "list.h"
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

