#include<stdio.h>
/*
 * main program that prints lower and upper case alphabets
 * Return: always 0
 */

int main(void)
{char c;
for (c = 'a'; c <= 'z' ; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar ('\n');
return (0);
}
