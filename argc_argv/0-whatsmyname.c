#include <stdio.h>
#include "main.h"

/**
 * main - Prints the program name.
 * argc: Number of command-line arguments (unused in this program).
 * argv: Array of command-line arguments, with argv[0] being the program's name.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
