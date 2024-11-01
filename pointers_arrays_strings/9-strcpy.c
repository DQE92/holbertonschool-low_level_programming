#include <stdio.h>
#include <string.h>
#include "main.h"

char *_strcpy(char *dest, char *src)
{
    int i = 0;
/**
 * @while - copie chaque caractère vers dest
 * ensuite ajoute le caractère null a fin de dest
 * return - retourne le pointeur vers dest
 */
    while (src[i] !='\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}
