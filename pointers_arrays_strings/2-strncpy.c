#include "main.h"

/**
 * _strncpy - Copie les premiers n caractères d'une chaîne dans une autre
 * dest: Chaîne de destination
 * src: Chaîne source
 * n: Nombre maximum de caractères à copier
 *
 * Retourne: Pointeur vers la chaîne destination dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}
