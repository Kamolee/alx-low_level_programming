#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
va_list all;
int i = 0;
char *str;
char *s = "";

va_start(all, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'a':
printf("%s%c", s, va_arg(all, int));
break;
case 'i':
printf("%s%d", s, va_arg(all, int));
break;
case 'f':
printf("%s%f", s, va_arg(all, double));
break;
case 't':
str = va_arg(all, char *);
if (!str)
str = "(nil)";
printf("%s%s", s, str);
break;
default:
i++;
continue;
}
s = ", ";
i++;
}
}
printf("\n");
va_end(all);
}
