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
unsigned int sum = 0;
for (unsigned int i = 0;i < n; i++)
sum = sum + va_arg(argu, int);
va_end(argu);
return (sum);
}
