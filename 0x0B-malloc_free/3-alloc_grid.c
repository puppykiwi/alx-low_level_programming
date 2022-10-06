#include "main.h"
/*
*betty technicalities
*/int **alloc_grid(int width, int height)
{
int len = height;
int wit = width;
int result[wit][len];
int i, j;
for (i = 0; i < width; i++)
{
    for (j = 0; j < height; j++)
    {
        result[i][j] = 0;
    }
}

return(result);

}