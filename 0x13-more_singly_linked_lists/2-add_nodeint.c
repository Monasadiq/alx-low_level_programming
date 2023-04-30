#include "lists.h"
/**
 * add_nodeint-functiont 
 * begining of a listint_t list.
 *
 * @head: parameter double pointer
 * @n: parameter with the 
 *
 * return: the new code
 */
listint_t *add_noseint(listint_t **head, const int n)
{
 listint_t *new;

 new=malloc(sizeof(listint_t));
 if(new==NULL)
 {
	 return (NULL);
 }
 new->n=n;
 new->next=*head;
 *head=new;

 return (new);
}
