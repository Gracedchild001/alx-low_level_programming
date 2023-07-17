#include <stdlib.h>
#include "dog.h"
/**
*init_dog - init var type struct dog
*@d: pointer for initializing
*@name: init the name
*@age: init the age
*@owner: init the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
