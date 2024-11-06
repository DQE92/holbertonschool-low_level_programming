#include "main.h"

/**
 * _strspn - lenghtof the initial segment composed of bytes
 * from accept
 * @s : the string
 * @accept : substring of acceptance
 * return : count (lenght)
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int found;
unsigned int count = 0;

    while (*s)
    {
        found = 0;
        for (i = 0; accept[i] != '\0'; i++)
        {
                if(*s == accept [i])
                {
                    found = 1;
                    count ++;
                    break;

                }

        }
        if (!found)
        break;
        s++;
    }
    return (count);
}