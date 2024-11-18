#include "function_pointers.h"
/**
 * array_iterator - Applique une fonction donnée à chaque élément d’un tableau.
 * @array: Le tableau d’entiers.
 * @size: La taille du tableau.
 * @action: Un pointeur vers la fonction à appliquer à chaque élément.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if(array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
    action(array[i]);
}
}
