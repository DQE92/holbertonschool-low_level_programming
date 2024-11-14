#include "dog.h"
#include <string.h>
/*
*return - si d est null, rien ne se passe
*if - verifier et afficher le nom
*printf - afficher l'âge sans besoin de vérifier NULL, car c'est un float (pas un pointeur)
*if - verifier et afficher le propriétaire
*/
void print_dog(struct dog *d)
{

if (d == NULL) 
{
return;
}

if (d->name == NULL) 
{
printf("Name: (nil)\n");
} else 
{
printf("Name: %s\n", d->name);
}

printf("Age: %f\n", d->age);

if (d->owner == NULL) 
{
printf("Owner: (nil)\n");
} else 
{
printf("Owner: %s\n", d->owner);
}
}
