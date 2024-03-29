#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *bef = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = bef;
bef = *head;
*head = next;
}
*head = bef;
return (*head);
}
