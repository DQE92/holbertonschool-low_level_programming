#include <stdlib.h>
/*
*1- verifie si str est Null
*2- calcul la longueur de la chaine 
*3- alloue de la mémoire pour la copie de la chaine
*4- copier la chaine dans la mémoire allouée 
*retourne le pointeur vers la chaine dupliquée
*/
char *_strdup(char *str) {
char *duplicate;
unsigned int i, length = 0;

if (str == NULL) 
{
return NULL;
}

while (str[length] != '\0') 
{
length++;
}

duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL) 
{
return NULL;
}

for (i = 0; i < length; i++) 
{
duplicate[i] = str[i];
}
duplicate[length] = '\0';

return duplicate;
}
