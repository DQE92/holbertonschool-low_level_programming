#include <stdio.h>

int main(void)
{
    /* Affiche la taille des types de base en octets */
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of a int: %zu bytes(s)\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));

    return (0);
}
