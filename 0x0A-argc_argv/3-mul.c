#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{

int i, d, m, leng, f, digit;       

i = 0;
d = 0;            
m = 0;
leng = 0;
f = 0;
digit = 0;
while (s[leng] != '\0')
len++
while (i < leng && f == 0)
{

if (s[i] == '-') 
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';                
if (d % 2)
digit = -digit;
m = m * 10 + digit;
f = 1;

if (s[i + 1] < '0' || s[i + 1] > '9'
break;

f = 0;
}
i++;
}
if (f == 0)
return (0);
return (m);
}
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)               
*/
int main(int argc, char *argv[])
{
int result, numb, numb1;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);

}
numb = _atoi(argv[1]);
numb1 = _atoi(argv[2]);
result = numb * numb1;
printf("%d\n", result);
return (0);
}
