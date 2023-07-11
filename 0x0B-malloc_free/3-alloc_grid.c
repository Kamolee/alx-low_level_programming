#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
int **chk;
int i;
int j;
if (width <= 0 || height <= 0)
return (NULL);

chk = malloc(sizeof(int *) * height);
if (chk == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
chk[i] = malloc(sizeof(int) * width);
if (chk[i] == NULL)
{
for (i = 0; i > 0; i--)
free(chk[i]);
free(chk);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
chk[i][j] = 0;
}
return (chk);
}
