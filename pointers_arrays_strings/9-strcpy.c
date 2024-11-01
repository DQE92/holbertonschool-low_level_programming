#include <stdio.h>
#include "main.h"
#include <string.h>



char *_strcpy(char *dest, char *src) {
    char *original_dest = dest; // Save the original pointer to return later

    // Copy each character from src to dest, including the null terminator
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Add the null terminator at the end of dest

    return original_dest; // Return the original destination pointer
}
