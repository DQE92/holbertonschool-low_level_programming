#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - Sélectionne la fonction correcte à appeler.
 * @s: L'opérateur passé en argument (exemple: "+").
 *
 * Return: Un pointeur vers la fonction correspondant à l'opérateur.
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL)
    {
        if (*s == *(ops[i].op))
            return (ops[i].f);
        i++;
    }

    return (NULL);
}
