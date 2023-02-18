#include<stdio.h>
/**
 * main- program that prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{ char po;
for (po = 'z'; po >= 'a'; po--)
putchar (po);
putchar ('\n');
return (0);
}
