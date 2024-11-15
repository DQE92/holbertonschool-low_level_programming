#include "dog.h"
/*
*malloc(sizeof(dog_t)) - Alloue l’espace pour la structure.
*Si cela échoue, la fonction retourne NULL.
*
*malloc(strlen(name) + 1) - Alloue l’espace pour copier name.
*strcpy - Copie le contenu de la chaîne, répétez pour owner.
*
* Si l’une des allocations échoue, libérez les ressources déjà allouées.
*
*return - retour pointeur
*/
dog_t *new_dog(char *name, float age, char *owner)
{
char *ocp, *ncp;
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

ncp = malloc(strlen(name) + 1);
if (ncp == NULL)
{
free(new_dog);
return(NULL);
}
strcpy(ncp, name);

ocp = malloc(sizeof(owner) + 1);
if (ocp == NULL)
{
free(ncp);
free(new_dog);
return (NULL);
}
strcpy(ocp, owner);

new_dog->name = ncp;
new_dog->age = age;
new_dog->owner = ocp;

return(new_dog);
}
