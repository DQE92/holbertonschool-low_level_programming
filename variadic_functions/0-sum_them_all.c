#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Retourne la somme de tous ses paramètres.
 * @n: Le nombre de paramètres passés à la fonction.
 *
 * Return: La somme des paramètres ou 0 si n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    int sum = 0;
    va_list args;

    if (n == 0)
        return (0);

    va_start(args, n);

    for (i = 0; i < n; i++)
        sum += va_arg(args, int);
    
    va_end(args);

    return (sum);
}
