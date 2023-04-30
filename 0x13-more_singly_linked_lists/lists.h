#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct listint_s
{
	int k;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *m);
size_t listint_len(const listint_t *m);
listint_t *add_nodeint(listint_t **head);
listint_t *add_nodeint_end(listint_t **head, const int k);
 void free_listint(listint_t *head);
 void free_listint2(listint_t **head);
 int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx,int k);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
