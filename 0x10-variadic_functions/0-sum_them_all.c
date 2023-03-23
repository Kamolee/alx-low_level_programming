#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all parameters
 * @n - number of parameters
 * return : 0 if n ==0
 * otherwise sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list argu;
va_start(argu, n);
if (n != 0)
{
int i = 0;
int sum = 0;
sum = sum + va_arg(argu, int);
i++;
va_end(argu);
}
return (0);
}
