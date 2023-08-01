#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in  new node
 *
 * Return: pointer to  new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *now;
now = malloc(sizeof(listint_t));
if (!now)
return (NULL);
now->n = n;
now->next = *head;
*head = now;
return (now);
}
