#include<stdio.h>
/**
 * main - program that prints the size of various types
 * Return: 0
 */
int main(void)
{	char aa;
	int bb;
	long int cc;
	long long int dd;
	float ee;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(aa));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(bb));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(cc));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(dd));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(ee));
}
