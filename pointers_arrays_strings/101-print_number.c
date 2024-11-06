#include "main.h"

/**
 * print_number - Prints an integer using _putchar only
 * n: The integer to print
 */
void print_number(int n)
{
    if (n < 0) // Check if n is negative
    {
        _putchar('-'); // Print the negative sign
        n = -n; // Convert n to positive for further processing
    }

    if (n / 10) // Check if n has more than one digit
        print_number(n / 10); // Recursive call to print the preceding digits

    _putchar((n % 10) + '0'); // Print the last digit of n
}
