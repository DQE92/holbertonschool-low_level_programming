#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à zéro.
 * nmemb: Nombre d'éléments.
 * size: Taille de chaque élément en octets.
 *
 * Return: Pointeur vers la mémoire allouée ou NULL en cas d'erreur.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    char *ptr;

    /* Vérification si nmemb ou size est 0 */
    if (nmemb == 0 || size == 0)
        return NULL;

    /* Allocation de la mémoire */
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    /* Initialisation de la mémoire à zéro */
    for (i = 0; i < (nmemb * size); i++)
        ptr[i] = 0;

    return ptr;
}
