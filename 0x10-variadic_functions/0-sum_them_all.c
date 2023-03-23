#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum
 *
 * @n - declared value
 * return : 0 if n ==0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list argu;
va_start(argu, n);
if (n != 0)
{
int i = 0;
int sum = 0;
sum = sum + n;
i++;
va_end(argu);
}
return (0);
}
