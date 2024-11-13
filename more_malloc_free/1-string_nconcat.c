#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatène deux chaînes avec n octets de s2.
 * s1: Première chaîne.
 * s2: Deuxième chaîne.
 * n: Nombre d'octets de s2 à ajouter à s1.
 *
 * Return: Pointeur vers la nouvelle chaîne concaténée, ou NULL si échec.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1, len2, total_len, i, j;
    char *new_str;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    total_len = len1 + n;

    new_str = malloc(total_len + 1);
    if (new_str == NULL)
        return NULL;

    for (i = 0; i < len1; i++)
        new_str[i] = s1[i];

    for (j = 0; j < n; j++)
        new_str[i + j] = s2[j];

    new_str[i + j] = '\0';

    return new_str;
}
