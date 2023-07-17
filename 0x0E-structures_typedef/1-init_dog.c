#include <stdlib.h>
#include "dog.h"

/*
 * init_dog-function that initialize a variable of type struct dog
 * @d: struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
name = d->name;
age = d->age;
owner = d->owner;
}
