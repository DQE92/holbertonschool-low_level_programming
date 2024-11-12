#include "main.h"
#include <stdlib.h>
/*
*for - libère chaque ligne
*free (grid) - libére le tableau de pointeurs
*
**/
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}
