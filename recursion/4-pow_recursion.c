#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * x: The base
 * y: The exponent
 *
 * Return: The result of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return -1; // Retourne -1 si l'exposant est négatif
    if (y == 0)
        return 1; // Toute valeur élevée à la puissance 0 est 1
    return x * _pow_recursion(x, y - 1); // Calcul récursif pour x^y
}
