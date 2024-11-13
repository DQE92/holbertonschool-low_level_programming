#include "main.h"
#include <stdlib.h>
/**
 * array_range - Crée un tableau d'entiers de min à max inclus.
 * @min: Valeur minimale.
 * @max: Valeur maximale.
 *
 * Return: Pointeur vers le tableau d'entiers ou NULL en cas d'erreur.
 */
int *array_range(int min, int max)
{
    int *array;
    int i, size;

    if (min > max)
        return NULL;

    size = max - min + 1;

    array = malloc(size * sizeof(int));
    if (array == NULL)
        return NULL;

    for (i = 0; i < size; i++)
        array[i] = min + i;

    return array;
}
