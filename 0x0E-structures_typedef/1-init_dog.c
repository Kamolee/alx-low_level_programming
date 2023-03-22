#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize variable dog
 *
 * Return : 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d -> name = name;
d -> age = age;
d -> owner = owner;
}
}
