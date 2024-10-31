#include <stdlib.h> /* inculre les bibliothèques */
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative, or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));  /* genere un nombre au hasard */
n = rand() - RAND_MAX / 2;

/*
 * affiche le nombre
 * et son statut
 **/
printf("%d ", n);

if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}

return (0);
}

