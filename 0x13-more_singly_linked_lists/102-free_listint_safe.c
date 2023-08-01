#include "lists.h"

/**
 * free_listint_safe - free a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
size_t l = 0;
int p;


if (!h || !*h)
return (0);
while (*h)
{
p = *h - (*h)->next;
if (p > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
l++;
}
else
{
free(*h);
*h = NULL;
l++;
break;
}
}
*h = NULL;
return (l);
}
