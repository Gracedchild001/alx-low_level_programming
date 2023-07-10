#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*free_grid - free 2d arr
*@grid: 2d grd
*@height: h dim grd
*Description: frees mem grd
*Return: nothing
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
