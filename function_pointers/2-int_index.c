#include "function_pointers.h"
/**
 * int_index - Cherche un entier dans un tableau en utilisant une fonction de comparaison.
 * @array: Le tableau dans lequel chercher.
 * @size: Le nombre d'éléments dans le tableau.
 * @cmp: Un pointeur vers la fonction utilisée pour comparer les valeurs.
 *
 * Retourne: L'index du premier élément pour lequel cmp ne renvoie pas 0,
 *           ou -1 si aucun élément ne correspond ou si size <= 0
 *           ou si array/cmp est NULL.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || cmp == NULL || size <= 0)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return (i);
    }

    return (-1);
}
