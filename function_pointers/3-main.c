#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Point d'entrée du programme.
 * @argc: Nombre d'arguments passés.
 * @argv: Tableau des arguments passés.
 *
 * Return: 0 en cas de succès, ou un code d'erreur en cas d'échec.
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*operation)(int, int);

    /* Vérifier que le nombre d'arguments est correct */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    /* Convertir les arguments en entiers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    /* Obtenir la fonction correspondant à l'opérateur */
    operation = get_op_func(argv[2]);

    /* Vérifier si l'opérateur est valide */
    if (operation == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    /* Effectuer l'opération et afficher le résultat */
    result = operation(num1, num2);
    printf("%d\n", result);

    return (0);
}
