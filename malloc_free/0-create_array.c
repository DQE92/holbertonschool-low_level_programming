#include "main.h"
#include <stdlib.h>
/*1- variables
*2- verifie si la taille est 0 donc return null
*3- alloue la mémoire
*4- initialise chaque élément avec 'c'
*5- retourne le pointeur vers tableau
*/
char *create_array(unsigned int size, char c) 
{
char *array;
unsigned int i;

if (size == 0) 
{
return NULL;
}

array = (char *)malloc(size * sizeof(char));
if (array == NULL) 
{
return NULL;
}

for (i = 0; i < size; i++) 
{
array[i] = c;
}

return array;
}
