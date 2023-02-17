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
printf("Size of a char:%lu bytes(s)\n", (unsigned long)sizeof(aa));
printf("Size of a int:%lu bytes(s)\n", (unsigned long)sizeof(bb));
printf("Size of a long int:%lu bytes(s)\n", (unsigned long)sizeof(cc));
printf("Size of a long long int:%lu bytes(s)\n", (unsigned long)sizeof(dd));
printf("Size of a float:%lu bytes(s)\n", (unsigned long)sizeof(ee));
}
