#include "main.h"

/**
 * _strncat - Concatène deux chaînes en utilisant au maximum n octets de src
 * dest: Chaîne de destination
 * src: Chaîne source
 * n: Nombre maximum d'octets à utiliser de src
 *
 * Retourne: Pointeur vers la chaîne résultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int longueur_dest = 0;
    int i;

    while (dest[longueur_dest] != '\0')
    {
        longueur_dest++;
    }

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[longueur_dest + i] = src[i];
    }

    dest[longueur_dest + i] = '\0';

    return dest;
}
