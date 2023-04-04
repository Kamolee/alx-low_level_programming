#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list         
 * @head: listnt_t list to be freed
 */
void free_listint(listint_t *head);
{
list_t *t;
while (head)
{
t = head->next;
free(head);
head = t;
}
}
