#include "main.h"
#include <stdlib.h>
/*
*1- verification des dimentions
*2- allocation de mémoire pour les lignes
*3- libérer toute la mémoire précédemment allouée en cas d'échec
*4- initialiser chaque élément à 0
*/
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL;

    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }
        
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return grid;
}
