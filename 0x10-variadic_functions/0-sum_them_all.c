#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its parameters.
* @n: The number of parameters passed to the function.
* @...: A variable number of parameters to calculate the sum of.
*
* Return: If n == 0 - 0.
* Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list pt;
unsigned int j;
unsigned int sum = 0;
va_start(pt, n);
for (j = 0; j < n; j++)
sum += va_arg(pt, int);
va_end(pt);
return (sum);
}
