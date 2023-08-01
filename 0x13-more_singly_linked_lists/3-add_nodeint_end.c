#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the element
 *
 * Return: pointer to the new node, or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *now;
listint_t *temp = *head;

now = malloc(sizeof(listint_t));
if (!now)
return (NULL);

now->n = n;
now->next = NULL;
if (*head == NULL)
{
*head = now;
return (now);
}
while (temp->next)
temp = temp->next;
temp->next = now;
return (now);
}
