#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int longone = 0;
int o;
while (*s != '\0')
{
longone++;
s++;
}
s--;
for (o = longone; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
