#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
*if - Si s1 ou s2 = NULL, on les traite comme des chaînes vides en les assignant à ""
*while - longueur de s1 et s2 en comptant le nombre de caractères avant le caractère nul ('\0')
*concat - malloc alloue suffisamment d’espace pour stocker tous les caractères de s1 et s2, plus un caractère de fin ('\0')
*si échoue retourne nul
*for - copie S1 dans concat
*for - copie S2 après S1 dans concat
*concat [i=j] - ('\0') est ajouté pour finir la chaine
*return - retourne le pointeur concat vers la nouvelle chaîne concaténée.
**/
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < len2; j++)
concat[i + j] = s2[j];

concat[i + j] = '\0';

return (concat);
}
