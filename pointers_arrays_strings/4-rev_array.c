#include "main.h"

void reverse_array(int *a, int n)
{
    int i = 0;       // Début du tableau
    int j = n - 1;   // Fin du tableau
    int temp;        // Variable temporaire pour l'échange

    while (i < j)
    {
        // Échange a[i] et a[j]
        temp = a[i];  // Stocke temporairement la valeur de a[i]
        a[i] = a[j];  // Place la valeur de a[j] dans a[i]
        a[j] = temp;  // Place la valeur temporaire (ancienne a[i]) dans a[j]

        // Avance l'indice i vers le centre et recule j vers le centre
        i++;
        j--;
    }
}
