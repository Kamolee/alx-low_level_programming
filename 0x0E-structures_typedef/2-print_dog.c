#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - print values
 *
 * return : nil or value
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
/*printf("Name: %s\nAge: %f\nOwner: \n", d->name ,d->age d->owner);*/
}
