#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * Main - Prints the alphabets
 *
 * Return: 0
 */
int main(void)
{char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{putchar(alp[i]);
}
putchar('\n');
return (0);
}
