#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print values
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
}