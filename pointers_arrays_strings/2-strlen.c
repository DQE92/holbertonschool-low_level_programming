#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }
    return (len);
}
