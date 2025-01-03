#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name using a given function.
 * @name: The name to print.
 * @f: A pointer to a function that specifies how to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}
