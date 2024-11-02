#include "main.h"

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

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}
