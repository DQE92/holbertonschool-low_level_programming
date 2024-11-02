#include "main.h"
#include <string.h>

/**
 * _strcat - Concatène deux chaînes de caractères.
 * dest: Chaîne de destination à laquelle src sera ajoutée.
 * src: Chaîne source à ajouter à dest.
 *
 * Return: Pointeur vers la chaîne résultante dest.
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    // Trouve la fin de dest
    while (dest[i] != '\0')
    {
        i++;
    }

    // Ajoute src à la fin de dest
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Ajoute le caractère nul à la fin de la chaîne résultante
    dest[i] = '\0';

    return dest;
}
