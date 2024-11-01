#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int started = 0;

    while (*s) {
        if (*s == '-') {
            sign *= -1;
        } else if (*s >= '0' && *s <= '9') {
            result = result * 10 + (*s - '0');
            started = 1;
        } else if (started) {
            break;
        }
        s++;
    }

    return result * sign;
}
