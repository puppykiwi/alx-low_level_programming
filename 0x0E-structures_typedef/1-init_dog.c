#include "dog.h"
#include <stdlib.h>

/*
*betty technicalities
*/void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;

(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
