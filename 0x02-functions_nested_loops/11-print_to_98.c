#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from 0 to 98
 * @num: the number to start printing from
 * Return: always 0
 */
void print_to_98(int num)
{
if (num <= 98)
{
for (; num <= 98; num++)
{
if (num == 98)
{
printf("%d", num);
printf("\n");
break;
}
else
{
printf("%d, ", num);
}
}
}
else
{
for (; num >= 98; num--)
{
if (num == 98)
{
printf("%d", num);
printf("\n");
break;
}
else
{
printf("%d, ", num);
}
}
}
}
