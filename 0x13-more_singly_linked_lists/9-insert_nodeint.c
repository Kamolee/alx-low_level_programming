#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *now;
listint_t *temp = *head;


now = malloc(sizeof(listint_t));
if (!now || !head)
return (NULL);
now->n = n;
now->next = NULL;
if (idx == 0)
{
now->next = *head;
*head = now;
return (now);
}
for (j = 0; temp && j < idx; j++)
{
if (j == idx - 1)
{
now->next = temp->next;
temp->next = now;
return (now);
}
else
temp = temp->next;
}
return (NULL);
}
