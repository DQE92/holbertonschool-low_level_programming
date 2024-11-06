#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _memcpy - Copies a specified number of bytes from source to destination
 * dest: The destination buffer where bytes will be copied
 * src: The source buffer from which bytes are copied
 * n: The number of bytes to copy
 *
 * Return: A pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n) 
{
    unsigned int i; 

    for (i = 0; i < n; i++) 
    {
        dest[i] = src[i];
    }
    return dest;
}
