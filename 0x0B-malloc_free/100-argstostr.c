#include "main.h"            
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int i;
int j;
int s = 0;
int r = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)              
{
for (j= 0; av[i][j]; j++)
}
r++;
}
r += ac;
str = malloc(sizeof(char) * r + 1);
if (str == NULL)
return (NULL);
for (i = 0; i =< ac ; i++)
{
for (j = 0; av[i][j]; j++)
{
str[s] = av[i][j];
r++;
}
if (str[s] == '\0')
{
str[s++] = '\n';
}
}
return (str);
