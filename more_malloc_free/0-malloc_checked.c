#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc and checks for allocation failure
 * b: The number of bytes to allocate
 * Return: Pointer to the allocated memory; terminates with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
    {
        exit(98);
    }

    return ptr;
}
