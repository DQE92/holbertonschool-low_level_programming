#include "dog.h"
/*
*if - regarde si d est NULL
*free_dog - libère my dog
*/
void free_dog(dog_t *d)
{
if(d == NULL)
return(NULL);

free(d->name);
free(d->owner);
free(d);
}
