#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
int j;
int counter = 0;
unsigned long int c;

for (j = 63; j >= 0; j--)
{
c = n >> j;
if (c & 1)
{
_putchar('1');
counter++;
}
else if (counter)
_putchar('0');
}
if (!counter)
_putchar('0');
}
