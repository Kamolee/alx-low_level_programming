#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog-prints a struct dog
 * @d: dog to print
 *
*/

void print_dog(struct dog *d)
{
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
if (d == NULL)
return;
}
